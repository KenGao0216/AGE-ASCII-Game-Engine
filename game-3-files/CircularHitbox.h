#ifndef CIRCULAR_HITBOX_H
#define CIRCULAR_HITBOX_H

#include "../engine/Hitbox.h"

class CircularHitbox : public Hitbox {
    int radius;
    
public:
    CircularHitbox(int r);
    ~CircularHitbox() override;
    
    int getRadius() const;
    void setRadius(int r);
    
    int getWidth() const override;
    int getHeight() const override;
    
    bool intersects(const Hitbox* other, const Position& thisPos, const Position& otherPos) const override;
};

#endif
