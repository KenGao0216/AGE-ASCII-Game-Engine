#ifndef HITBOX_H
#define HITBOX_H

#include "Position.h"

class Hitbox {
public:
    virtual ~Hitbox() = default;
    virtual bool intersects(const Hitbox* other, const Position& thisPos, const Position& otherPos) const = 0;
    virtual int getWidth() const = 0;
    virtual int getHeight() const = 0;
};

#endif
