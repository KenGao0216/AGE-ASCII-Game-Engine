#ifndef NCURSES_CONTROLLER_H
#define NCURSES_CONTROLLER_H

#include "InputController.h"

class NcursesController : public InputController {
public:
    Action getAction() override;
};

#endif
