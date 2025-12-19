#ifndef PLAYER_SHIP_DRAWING_H
#define PLAYER_SHIP_DRAWING_H

#include "../engine/Drawing.h"

class PlayerShipDrawing : public Drawing {
    int width;
    int height;
    
public:
    PlayerShipDrawing(int width = 3, int height = 2);
    ~PlayerShipDrawing() override;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
};

#endif
