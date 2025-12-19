#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "ObjectManager.h"
#include <vector>

class WorldState; 

class View {
public:
    virtual ~View() = default; 
    virtual void render(const WorldState &world) = 0;
    virtual void notify(const std::vector<std::string>& statusLines) = 0;
};

#endif
