#ifndef KEY_STATE_MANAGER_H
#define KEY_STATE_MANAGER_H

#include <map>
#include <set>

class InputController;


class KeyStateManager {
    std::map<int, int> keyStates;  //key -> frames since last seen
    std::set<int> keysRegisteredThisFrame; 
    
public:
    KeyStateManager();
    ~KeyStateManager() = default;
    
    //copy and move for map and set
    KeyStateManager(const KeyStateManager&) = default;
    KeyStateManager(KeyStateManager&&) noexcept = default;
    KeyStateManager& operator=(const KeyStateManager&) = default;
    KeyStateManager& operator=(KeyStateManager&&) noexcept = default;
    
    void registerKeyPress(int key);
    
    bool isKeyPressed(int key) const;
    
    void updateKeyStates(InputController* controller);
    
    void clear();
};

#endif
