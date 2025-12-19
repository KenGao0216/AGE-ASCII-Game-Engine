#ifndef PLAYER_SHIP_H
#define PLAYER_SHIP_H

#include "../engine/Object.h"

class PlayerShip : public Object {
    int moveSpeed;
    int fireRate;    
    int fireCooldown;    
    int lives;
    
public:
    PlayerShip(int startX, int startY);
    ~PlayerShip() override;
    
    int getLives() const;
    void takeDamage();
    bool canFire() const;
    void resetFireCooldown();
    
    void update() override;
    void onCollision(Object* other) override;
    bool isCollidable() const override;
};

#endif
