#ifndef FRAME_H
#define FRAME_H

#include <string>

class Frame{
    int length, width;
    std::string word;

  public:
    Frame();
    Frame(int l, int w, std::string word);
    Frame(const Frame& other) = default; 
    
    Frame& operator=(const Frame&) = default;
    Frame(Frame&&) noexcept = default;
    Frame& operator=(Frame&&) noexcept = default;
    ~Frame() = default;
    
    int getLength() const;
    int getWidth() const;
    std::string getWord() const;
    void setLength(int l);
    void setWidth(int w);
    void setWord(std::string w);
};

#endif
