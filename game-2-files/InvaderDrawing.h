#ifndef INVADER_DRAWING_H
#define INVADER_DRAWING_H

#include "../engine/Drawing.h"

class InvaderTopDrawing : public Drawing {
    int width;
    int height;
    
public:
    InvaderTopDrawing(int width = 3, int height = 2);
    ~InvaderTopDrawing() override;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
};

class InvaderMiddleDrawing : public Drawing {
    int width;
    int height;
    
public:
    InvaderMiddleDrawing(int width = 3, int height = 2);
    ~InvaderMiddleDrawing() override;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
};

class InvaderBottomDrawing : public Drawing {
    int width;
    int height;
    
public:
    InvaderBottomDrawing(int width = 3, int height = 2);
    ~InvaderBottomDrawing() override;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
};

#endif
