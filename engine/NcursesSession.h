#ifndef NCURSES_SESSION_H
#define NCURSES_SESSION_H

#include <ncurses.h>

class NcursesSession {
public:
    NcursesSession() {
        initscr();
        cbreak();
        noecho();
        keypad(stdscr, true);
        nodelay(stdscr, true); 
        curs_set(0);           
        mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
    }

    ~NcursesSession() {
        endwin();
    }

    NcursesSession(const NcursesSession &) = delete;
    NcursesSession &operator=(const NcursesSession &) = delete;
};

#endif
