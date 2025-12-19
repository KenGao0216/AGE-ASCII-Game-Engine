#ifndef PIPE_H
#define PIPE_H

#include "../engine/Object.h"

class Pipe : public Object {
    int gapY;       
    int gapHeight;  
    int scrollSpeed; //how fast pipe moves left
    bool scored;     //has the bird passed pipe
    int moveCounter;
    
public:
    Pipe(int startX, int gapY, int gapHeight);
    ~Pipe() override;
    
    int getGapY() const;
    int getGapHeight() const;
    bool hasScored() const;
    void setScored(bool s);
    
    void update() override;
    void onCollision(Object* other) override;
    bool isCollidable() const override;
    
    bool isInGap(int y) const;
};

#endif
