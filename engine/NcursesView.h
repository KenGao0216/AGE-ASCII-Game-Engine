#ifndef NCURSES_VIEW_H
#define NCURSES_VIEW_H

#include "View.h"
#include "DrawingManager.h"
#include <vector>
#include <string>

// Forward declarations
class Object;
class ObjectManager;
class Position;
class WorldState;

class NcursesView : public View {
    int screenWidth;
    int screenHeight;
    bool showBorders;
    std::vector<std::string> statusLines;
    DrawingManager& drawingManager;
    
public:
    NcursesView();
    NcursesView(int width, int height, bool borders = true);
    virtual ~NcursesView() = default;
    
    void render(const WorldState& world) override;
    void notify(const std::vector<std::string>& statusLines) override;
    
protected:
    void drawBorders();
    void drawObjects(const ObjectManager& objectManager);
    void drawObject(const Object* obj);
    void drawStatus();
    void drawPlayer(const Position& playerPos);
    
    bool isInBounds(int x, int y) const;
    int getScreenWidth() const { return screenWidth; }
    int getScreenHeight() const { return screenHeight; }
    bool getShowBorders() const { return showBorders; }
    DrawingManager& getDrawingManager() { return drawingManager; }
    const DrawingManager& getDrawingManager() const { return drawingManager; }
};

#endif
