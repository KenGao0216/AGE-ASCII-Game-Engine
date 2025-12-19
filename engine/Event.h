#ifndef EVENT_H
#define EVENT_H

#include <string>

class Event {
    std::string type;

    public:
        Event();
        virtual ~Event();
        
        //string benefits from move 
        Event(const Event&) = default;
        Event(Event&&) noexcept = default;
        Event& operator=(const Event&) = default;
        Event& operator=(Event&&) noexcept = default;
        
        std::string getType() const;
        void setType(std::string type);
};

#endif
