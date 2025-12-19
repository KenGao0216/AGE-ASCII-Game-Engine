#ifndef DRAWINGMANAGER_H
#define DRAWINGMANAGER_H

#include "Drawing.h"
#include <map>
#include <string>
#include <memory>

//singleton
class DrawingManager {
    static std::unique_ptr<DrawingManager> instance;
    
    //drawingId -> drawing 
    std::map<std::string, std::unique_ptr<Drawing>> drawings;
    
    DrawingManager() = default;

public:
    static DrawingManager& getInstance();
    
    void registerDrawing(const std::string& drawingId, Drawing* drawing);
    
    const Drawing* getDrawing(const std::string& drawingId) const;
    
    bool hasDrawing(const std::string& drawingId) const;
    
    void clear();
    
    //no copy or asst
    DrawingManager(const DrawingManager&) = delete;
    DrawingManager& operator=(const DrawingManager&) = delete;
};

#endif
