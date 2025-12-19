#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include "Event.h"
#include "EventListener.h"
#include <vector>
#include <map>
#include <memory>
#include <string>

class EventManager {
    static std::unique_ptr<EventManager> instance; //only one instance
    std::map<std::string, std::vector<EventListener*>> listeners; //event type -> list of listeners
    std::vector<std::unique_ptr<Event>> eventQueue;
    EventManager() = default;

  public:
    static EventManager& getInstance();
        
    void subscribe(const std::string& eventType, EventListener* listener);
    void unsubscribe(const std::string& eventType, EventListener* listener);
    void unsubscribeAll(EventListener* listener);
    
    void publish(Event* event);
    
    void processEvents(); //notify listeners
    void clear();
    
    // singleton => no copying, asst
    EventManager(const EventManager&) = delete;
    EventManager& operator=(const EventManager&) = delete;

};

#endif
