#ifndef INPUTCONTROLLER_H
#define INPUTCONTROLLER_H

#include "KeyboardEvent.h"
#include "MouseEvent.h"
#include <variant>

struct NoAction{};

using Action = std::variant<NoAction, KeyboardEvent, MouseEvent>;

class InputController{
  public:
    virtual Action getAction() = 0;
};

#endif
