#ifndef KEY_CODES_H
#define KEY_CODES_H

//abstract away ncurses key codes => DIP
namespace KeyCodes {
    const int UP = 1000;
    const int DOWN = 1001;
    const int LEFT = 1002;
    const int RIGHT = 1003;
    
    const int SPACE = ' ';
    const int ESCAPE = 27;
    const int ENTER = '\n';
    const int TAB = '\t';
}

#endif
