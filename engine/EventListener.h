#ifndef EVENTLISTENER_H
#define EVENTLISTENER_H

#include "Event.h"

class EventListener {
    public: 
        virtual ~EventListener() = default;
        virtual void onEvent(const Event * e) = 0;
};

#endif
