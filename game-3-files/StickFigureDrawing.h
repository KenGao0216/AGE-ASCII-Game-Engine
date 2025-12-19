#ifndef STICK_FIGURE_DRAWING_H
#define STICK_FIGURE_DRAWING_H

#include "../engine/Drawing.h"
#include <vector>
#include <string>

class StickFigureDrawing : public Drawing {
public:
    StickFigureDrawing();
    ~StickFigureDrawing() override = default;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
    
    void updateFrame(const std::string& frameWord, int length, int width);
    
private:
    std::string currentFrameWord;
    int frameLength;
    int frameWidth;
};

#endif
