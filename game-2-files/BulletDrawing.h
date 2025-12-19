#ifndef BULLET_DRAWING_H
#define BULLET_DRAWING_H

#include "../engine/Drawing.h"

class PlayerBulletDrawing : public Drawing {
    int width;
    int height;
    
public:
    PlayerBulletDrawing(int width = 1, int height = 1);
    ~PlayerBulletDrawing() override;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
};

class EnemyBulletDrawing : public Drawing {
    int width;
    int height;
    
public:
    EnemyBulletDrawing(int width = 1, int height = 1);
    ~EnemyBulletDrawing() override;
    
    std::vector<std::string> getLines() const override;
    int getWidth() const override;
    int getHeight() const override;
};

#endif
