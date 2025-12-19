#ifndef WORLDSTATE_H
#define WORLDSTATE_H

#include "Position.h"
#include "ObjectManager.h"
#include "Object.h"
#include "State.h"
#include "KeyStateManager.h"
#include "KeyCodes.h"
#include "BorderType.h"
#include <map>

class WorldState : public State {
    Position player;
    ObjectManager objectManager;
    bool gameOver;
    
    std::map<BorderSide, BorderType> borderTypes;
    int screenWidth;
    int screenHeight;
    
protected:
    KeyStateManager keyStateManager;

public:
    WorldState();
    virtual ~WorldState();
    
    //unique ptrs
    WorldState(const WorldState&) = delete;
    WorldState(WorldState&&) noexcept = default;
    WorldState& operator=(const WorldState&) = delete;
    WorldState& operator=(WorldState&&) noexcept = default;

    void movePlayer(int dx, int dy, int dh);
    Position getPlayer() const;

    void addObject(std::unique_ptr<Object> obj);
    void removeObject(Object* obj);
    void removeObject(int index);
    ObjectManager& getObjectManager();
    const ObjectManager& getObjectManager() const;
    
    bool isGameOver() const;
    void setGameOver(bool over);
    virtual void reset();
    
    bool isKeyPressed(int key) const;
    void registerKeyPress(int key);  //call this when a key is detected
    
    void setBorderType(BorderSide side, BorderType type);
    BorderType getBorderType(BorderSide side) const;
    void setScreenSize(int width, int height);
    int getScreenWidth() const;
    int getScreenHeight() const;
    
    bool start() override;
    void end() override;
    void processAction(Action action) override;
    
    virtual void update();
    virtual void checkCollisions();
    virtual void checkBorderCollisions();  //check collisions with borders based on border type
};

#endif
