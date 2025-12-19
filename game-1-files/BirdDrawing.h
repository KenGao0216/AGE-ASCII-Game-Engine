#ifndef BIRD_DRAWING_H
#define BIRD_DRAWING_H

#include "../engine/Drawing.h"
#include <vector>
#include <string>

class BirdDrawing : public Drawing {
public:
    BirdDrawing();
    ~BirdDrawing() override = default;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
};

#endif
