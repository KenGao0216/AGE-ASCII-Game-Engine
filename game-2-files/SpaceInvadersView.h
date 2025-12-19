#ifndef SPACE_INVADERS_VIEW_H
#define SPACE_INVADERS_VIEW_H

#include "../engine/NcursesView.h"
#include "SpaceInvadersWorld.h"

class SpaceInvadersView : public NcursesView {
public:
    SpaceInvadersView();
    SpaceInvadersView(int width, int height, bool borders = true);
    ~SpaceInvadersView() override = default;
    
    void render(const WorldState& world) override;
};

#endif
