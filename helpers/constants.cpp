//
// Created by scarlett on 15-11-17.
//
#include "constants.h"

namespace helpers::constants {
    const string cli::CLEAR_TERM = "\033[2J\033[0;0H";
    const string cli::RESET_POINTER = "\033[0;0H";
    const string cli::CURSOR_OFF = "\e[?25l";
    const string cli::CURSOR_ON = "\e[?25h";

    const string cli::COLOR_DEFAULT = "\e[39m";
    const string cli::COLOR_GREEN = "\e[32m";
    const string cli::COLOR_RED = "\e[31m";





    const __useconds_t tick::loopTime = 13000;
}