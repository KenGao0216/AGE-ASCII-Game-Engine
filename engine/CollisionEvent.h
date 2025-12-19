#ifndef COLLISIONEVENT_H
#define COLLISIONEVENT_H

#include "Event.h"
#include "Object.h"
#include "Position.h"

class CollisionEvent : public Event {
    Position position;
    Object *objectCollider;
    Object *objectCollided;
    
  public:
    CollisionEvent();
    CollisionEvent(Object *o1, Object *o2, Position p);
    ~CollisionEvent();

    Position getPosition() const;
    Object *getObjectCollider() const;
    Object *getObjectCollided() const;

    void setPosition(Position p);
    void setObjectCollider(Object *o);
    void setObjectCollided(Object *o);

};

#endif
