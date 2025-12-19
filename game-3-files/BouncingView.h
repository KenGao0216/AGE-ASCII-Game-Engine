#ifndef BOUNCING_VIEW_H
#define BOUNCING_VIEW_H

#include "../engine/NcursesView.h"
#include "BouncingWorld.h"

class BouncingView : public NcursesView {
public:
    BouncingView();
    BouncingView(int width, int height, bool borders = true);
    ~BouncingView() override = default;
    
    void render(const WorldState& world) override;
};

#endif
