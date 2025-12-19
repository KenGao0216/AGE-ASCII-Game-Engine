#ifndef SPACE_INVADERS_WORLD_H
#define SPACE_INVADERS_WORLD_H

#include "../engine/WorldState.h"
#include "PlayerShip.h"
#include "Invader.h"
#include "Bullet.h"
#include <vector>

class SpaceInvadersWorld : public WorldState {
    PlayerShip* player;
    std::vector<Invader*> invaders; 
    int score;
    int wave;
    int frameCount;
    
    int invaderMoveInterval; 
    int invaderMoveCounter;
    bool invaderMovingRight;
    bool shouldDescend;
    
    int enemyFireInterval;
    int enemyFireCounter;
    
    bool gameStarted;
    
public:
    SpaceInvadersWorld();
    ~SpaceInvadersWorld() override;
    
    int getScore() const;
    int getWave() const;
    PlayerShip* getPlayer() const;
    bool hasGameStarted() const;
    
    void spawnWave();
    void firePlayerBullet();
    void fireEnemyBullet();
    void moveInvaders();
    void updateInvaderList();
    void updateStatusMessages(); 
    
    bool start() override;
    void reset() override;
    void processAction(Action action) override;
    void update() override;
    void checkCollisions() override;
};

#endif
