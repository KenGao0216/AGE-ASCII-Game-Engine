#ifndef MOUSEEVENT_H
#define MOUSEEVENT_H

#include "Event.h"
#include "Position.h"

enum Button{LEFT,RIGHT,MIDDLE};

class MouseEvent : public Event{
    Position position;
    Button button;

  public:
    MouseEvent();
    MouseEvent(Position position, Button button);
    Position getPosition() const;
    Button getButton() const;
    void setPosition(Position position);
    void setButton(Button button);
};

#endif
