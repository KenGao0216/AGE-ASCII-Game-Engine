#ifndef BIRD_H
#define BIRD_H

#include "../engine/Object.h"

class Bird : public Object {
    int flapStrength;
    int gravity;
    bool isFlapping;
    int gravityCounter; 
    int moveCounter;
    
public:
    Bird(int startX, int startY);
    ~Bird() override;
    
    void flap();
    void applyGravity();
    
    void update() override;
    void onCollision(Object* other) override;
    bool isCollidable() const override;
};

#endif
