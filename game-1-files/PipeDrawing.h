#ifndef PIPE_DRAWING_H
#define PIPE_DRAWING_H

#include "../engine/Drawing.h"
#include <vector>
#include <string>

class PipeDrawing : public Drawing {
    int gapY;
    int gapHeight;
    int screenHeight;
    int width;
    
public:
    PipeDrawing(int gapY, int gapHeight, int screenHeight = 20, int width = 4);
    ~PipeDrawing() override = default;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
};

#endif
