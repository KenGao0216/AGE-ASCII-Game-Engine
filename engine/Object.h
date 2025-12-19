#ifndef OBJECT_H
#define OBJECT_H

#include "Position.h"
#include "Hitbox.h"
#include "EventListener.h"
#include <string>
#include <memory>
#include <set>

class WorldState; //forward declare, avoid circular dependency

enum Solidity {
    SOLID, 
    SOFT, 
    CLEAR
};

class Object :public EventListener { //why is Object a subclass of EventListener?
    int id; 
    Position position;
    Position velocity;
    Solidity solidity;
    bool active; 
    bool playerControlled;
    std::string type;
    std::string drawingId; 
    
    std::unique_ptr<Hitbox> hitbox;
    WorldState *world;
    std::set<std::string> events;

    public: 
        Object();
        Object(const std::string& entityType, const std::string& drawingId);
        virtual ~Object();
        
        //cannot copy unique ptr
        Object(const Object&) = delete;
        Object(Object&&) noexcept = default;
        Object& operator=(const Object&) = delete;
        Object& operator=(Object&&) noexcept = default;

        int getId() const;
        Position getPosition() const;
        Position getVelocity() const;
        Solidity getSolidity() const;
        bool isActive() const;
        std::string getType() const;
        std::string getDrawingId() const;
        const Hitbox* getHitbox() const;
        WorldState* getWorld() const;

        void setId(int objectId);
        void setPosition(int x, int y, int height = 0);
        void setVelocity(int dx, int dy, int dh = 0);
        void setSolidity(Solidity s);
        void setActive(bool active);
        void setType(const std::string& entityType);
        void setDrawingId(const std::string& id);
        void setHitbox(Hitbox* hb);
        void setWorld(WorldState *w);
        
        bool isPlayerControlled() const;
        void setPlayerControlled(bool controlled);
        
        void onEvent(const Event* e) override; 
        void subscribeToEvent(const std::string& eventType); 
        void unsubscribeFromEvent(const std::string& eventType);

        virtual void update();
        virtual void onCollision(Object* other);
        virtual bool isCollidable() const;
        
        bool collidesWith(const Object* other) const;
        
        void destroy();
};


#endif
