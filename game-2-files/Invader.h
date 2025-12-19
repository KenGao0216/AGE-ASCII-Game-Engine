#ifndef INVADER_H
#define INVADER_H

#include "../engine/Object.h"

enum InvaderType { INVADER_TOP, INVADER_MIDDLE,INVADER_BOTTOM };

class Invader : public Object {
    InvaderType invaderType;
    int pointValue;
    int moveCounter;     
    bool movingRight; 
    
public:
    Invader(int startX, int startY, InvaderType type);
    ~Invader() override;
    
    InvaderType getInvaderType() const;
    int getPointValue() const;
    void setMovingRight(bool right);
    bool isMovingRight() const;
    
    void update() override;
    void onCollision(Object* other) override;
    bool isCollidable() const override;
};

#endif
