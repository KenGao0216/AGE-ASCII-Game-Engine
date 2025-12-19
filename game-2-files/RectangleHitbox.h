#ifndef RECTANGLE_HITBOX_H
#define RECTANGLE_HITBOX_H

#include "../engine/Hitbox.h"

class RectangleHitbox : public Hitbox {
    int width;
    int height;
    
public:
    RectangleHitbox(int w, int h);
    ~RectangleHitbox() override;
    
    int getWidth() const override;
    int getHeight() const override;
    
    void setWidth(int w);
    void setHeight(int h);
    
    bool intersects(const Hitbox* other, const Position& thisPos, const Position& otherPos) const override;
};

#endif
