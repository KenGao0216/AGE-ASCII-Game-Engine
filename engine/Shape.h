#ifndef SHAPE_H
#define SHAPE_H

#include "Frame.h"
#include <string>
#include <vector>

class Shape {
    int length, width;
    int frameCount, maxFrameCount;
    int frameDelay;
    std::vector<Frame> frames;
    std::string label;
    Shape();

  public:
    Shape(int maxFrameCount);
    ~Shape();
    
    //don't need copy, just move
    Shape(const Shape&) = delete;
    Shape(Shape&&) noexcept = default;
    Shape& operator=(const Shape&) = delete;
    Shape& operator=(Shape&&) noexcept = default;
    
    int getLength() const;
    int getWidth() const;
    int getFrameCount() const;
    int getMaxFrameCount() const;
    int getFrameDelay() const;
    Frame getFrame(int index) const;
    std::string getLabel() const;
    
    void setLength(int);
    void setWidth(int);
    void setFrameDelay(int);
    void addFrame(Frame frame);
    void setLabel(std::string);
};

#endif
