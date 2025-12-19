#ifndef MODEL_H
#define MODEL_H

#include "View.h"
#include "InputController.h"
#include <string>
#include <vector>

class WorldState;

class Model {
    View *view;
    InputController *controller;

public:
    void addView(View* view);
    void addController(InputController* controller);
    void notifyView(const std::vector<std::string>& statusLines);
    void renderView(const WorldState& world);
    Action getAction() const;
    bool hasView() const;
    bool hasController() const;
    InputController* getController();
};

#endif
