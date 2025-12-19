#ifndef BOUNCING_WORLD_H
#define BOUNCING_WORLD_H

#include "../engine/WorldState.h"
#include "StickFigure.h"
#include <vector>
#include <random>

class BouncingCircle; 

class BouncingWorld : public WorldState {
    StickFigure* player;
    std::vector<BouncingCircle*> circles;
    int spawnCounter;
    int spawnInterval;  
    std::mt19937 rng;
    int screenWidth;
    int screenHeight;
    int groundY;
    bool gameStarted; 
    
public:
    BouncingWorld();
    ~BouncingWorld() override;
    
    StickFigure* getPlayer() const;
    bool hasGameStarted() const;
    
    bool start() override;
    void reset() override;
    void processAction(Action action) override;
    void update() override;
    void checkCollisions() override;
    
private:
    void spawnCircle();
    void updateStatusMessages();
};

#endif
