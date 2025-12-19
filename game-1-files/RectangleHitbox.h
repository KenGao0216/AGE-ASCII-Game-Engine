#ifndef RECTANGLE_HITBOX_H
#define RECTANGLE_HITBOX_H

#include "../engine/Hitbox.h"
#include "../engine/Position.h"

class RectangleHitbox : public Hitbox {
    int width;
    int height;
    
public:
    RectangleHitbox(int w, int h);
    ~RectangleHitbox() override = default;
    
    int getWidth() const;
    int getHeight() const;
    
    void setWidth(int w);
    void setHeight(int h);
    
    bool intersects(const Hitbox* other, const Position& thisPos, const Position& otherPos) const override;
    
private:
    //helper for collision
    bool checkSpecialCollisionHelper(int x1, int y1, int w1, int h1, 
                   int x2, int y2, int w2, int h2) const;
};

#endif
