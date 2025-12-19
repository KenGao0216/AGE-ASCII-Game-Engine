#ifndef BULLET_H
#define BULLET_H

#include "../engine/Object.h"

class Bullet : public Object {
    int speed;
    bool isPlayerBullet;
    int ticksOffScreen;  
    
    static const int PLAYER_BULLET_DESPAWN_TICKS = 200;  // 10 seconds at 20 FPS (0.05s per tick) 
    
public:
    Bullet(int startX, int startY, bool playerBullet);
    ~Bullet() override;
    
    bool isPlayerOwned() const;
    bool isOffScreen(int screenWidth, int screenHeight) const;
    
    void update() override;
    void onCollision(Object* other) override;
    bool isCollidable() const override;
};

#endif
