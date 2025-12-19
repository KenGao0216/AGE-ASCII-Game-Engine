#ifndef POSITION_H
#define POSITION_H

class Position{
    int x, y, height;
  public:
    Position();
    Position(int x, int y, int h);
    
    Position(const Position&) = default;
    Position(Position&&) noexcept = default;
    Position& operator=(const Position&) = default;
    Position& operator=(Position&&) noexcept = default;
    ~Position() = default;
    
    bool operator==(const Position&) const;

    int getX() const;
    int getY() const;
    int getH() const;

    void setX(int x);
    void setY(int y);
    void setH(int h);
};

#endif
