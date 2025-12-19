#ifndef CIRCLE_DRAWING_H
#define CIRCLE_DRAWING_H

#include "../engine/Drawing.h"

class CircleDrawing : public Drawing {
    int radius;
    
public:
    CircleDrawing(int r);
    ~CircleDrawing() override;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
};

#endif
