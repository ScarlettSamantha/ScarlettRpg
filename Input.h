//
// Created by scarlett on 26-12-17.
//

#ifndef SCARLETTRPG_INPUT_H
#define SCARLETTRPG_INPUT_H


class Input {

public:
    static void set_conio_terminal_mode();
    static void reset_terminal_mode();
    static int kbhit();
    static int getch();
};


#endif //SCARLETTRPG_INPUT_H
