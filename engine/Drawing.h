#ifndef DRAWING_H
#define DRAWING_H

#include <string>
#include <vector>

class Drawing {
    public: 
        virtual ~Drawing() =default;
        virtual std::vector<std::string> getLines() const = 0;
        virtual int getWidth() const = 0;
        virtual int getHeight() const = 0;
};

#endif
