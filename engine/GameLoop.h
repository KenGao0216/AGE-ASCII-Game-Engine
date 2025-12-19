#ifndef GAME_LOOP_H
#define GAME_LOOP_H

class WorldState;


class GameLoop {
public:
    GameLoop();
    ~GameLoop() = default;
    
    void runWorld(WorldState* world, int rate = 20);
    
private:
    //helper for frame rate control
    void sleepForFrame(int frameDelayMs, long elapsedMs);
};

#endif
