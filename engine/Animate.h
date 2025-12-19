#ifndef ANIMATE_H
#define ANIMATE_H

#include <string>
#include <memory>
#include "Shape.h"
#include "Hitbox.h"

class Animate {
    Shape *shape;
    Frame currFrame; //frame to draw for object
    std::unique_ptr<Hitbox> boundary;
    int frameIndex, frameDelayCount;
    std::string label;

public:
    Animate();
    ~Animate();
    
    //cannot copy unique ptr
    Animate(const Animate&) = delete;
    Animate(Animate&&) noexcept = default;
    Animate& operator=(const Animate&) = delete;
    Animate& operator=(Animate&&) noexcept = default;
    
    Shape *getShape() const;
    const Hitbox* getBoundary() const;
    int getFrameIndex() const;
    int getFrameDelayCount() const;
    std::string getLabel() const;
    Frame getCurrFrame() const;
    
    void setShape(Shape *newShape);
    void setBoundary(Hitbox* newBoundary);
    void setFrameIndex(int newFrameIndex);
    void setFrameDelayCount(int newFrameDelayCount);
    void setLabel(std::string newLabel);
    void update(); //update frameIndex and currFrame based on frameDelayCount

};

#endif
