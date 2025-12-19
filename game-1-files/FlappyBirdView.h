#ifndef FLAPPY_BIRD_VIEW_H
#define FLAPPY_BIRD_VIEW_H

#include "../engine/NcursesView.h"
#include "FlappyBirdWorld.h"

class FlappyBirdView : public NcursesView {
public:
    FlappyBirdView();
    FlappyBirdView(int width, int height, bool borders = true);
    ~FlappyBirdView() = default;
    
    void render(const WorldState& world) override;
};

#endif
