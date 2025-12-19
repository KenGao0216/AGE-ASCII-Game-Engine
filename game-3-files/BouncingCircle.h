#ifndef BOUNCING_CIRCLE_H
#define BOUNCING_CIRCLE_H

#include "../engine/Object.h"
#include <memory>

class BouncingCircle : public Object {
    int radius;
    int velocityX;
    int velocityY;
    int ticksOffScreen;  
    int moveCounter;     
    static const int DESPAWN_TICKS = 200;  // 10 seconds at 20 FPS (0.05s per tick)  
    static const int MOVE_DELAY = 3; 
    
public:
    BouncingCircle(int startX, int startY, int velX, int velY, int r);
    ~BouncingCircle() override;
    
    void bounce();
    void setVelocityXY(int vx, int vy); 
    int getRadius() const;
    bool isOffScreen(int screenWidth, int screenHeight) const;
    
    void update() override;
    void onCollision(Object* other) override;
    bool isCollidable() const override;
};

#endif
