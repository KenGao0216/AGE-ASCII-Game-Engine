#ifndef STICK_FIGURE_H
#define STICK_FIGURE_H

#include "../engine/Object.h"
#include "../engine/Animate.h"
#include <memory>

class StickFigure : public Object {
    std::unique_ptr<Animate> animation;
    int groundY;
    int jumpVelocity;
    bool isJumping;
    static const int JUMP_STRENGTH = -2; 
    static const int GRAVITY = 1;         
    
public:
    StickFigure(int startX, int groundY);
    ~StickFigure() override;
    
    void moveLeft();
    void moveRight();
    void jump();
    int getGroundY() const;
    

    void update() override;
    void onCollision(Object* other) override;
    bool isCollidable() const override;
    
    Frame getCurrentFrame() const;
};

#endif
