#ifndef FLAPPY_BIRD_WORLD_H
#define FLAPPY_BIRD_WORLD_H

#include "../engine/WorldState.h"
#include "Bird.h"
#include "Pipe.h"

class FlappyBirdWorld : public WorldState {
    Bird* bird;
    int score;
    int frameCount;
    int pipeSpawnInterval;
    int nextPipeId;
    bool gameStarted;  //game starts on first flap
    
public:
    FlappyBirdWorld();
    ~FlappyBirdWorld() override;
    
    int getScore() const;
    Bird* getBird() const;
    bool hasGameStarted() const;
    
    void spawnPipe();
    void updateScore();
    void checkGameOver();
    void updateStatusMessages(); 
    
    bool start() override;
    void reset() override;
    void processAction(Action action) override;
    void update() override;
    void checkCollisions() override;
};

#endif
