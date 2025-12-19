#ifndef STATE_H
#define STATE_H

#include <string>
#include "Model.h"

class State : public Model {
    std::string type;
    bool started;

  protected:
    void setType(std::string); 

public:
    State();
    virtual ~State();
    
    std::string getType() const;
    bool isStarted() const;
    void setStarted(bool b);
    
    virtual bool start();
    virtual void end();
    virtual void processAction(Action action);
};

#endif
