//
// Created by scarlett on 15-11-17.
//

#ifndef SCARLETTRPG_CONSANTS_H
#define SCARLETTRPG_CONSANTS_H

#include <bits/types.h>
#include <iostream>
using namespace std;

namespace helpers::constants{
    class cli {
    public:
        static const string CLEAR_TERM;
        static const string RESET_POINTER;
        static const string CURSOR_OFF;
        static const string CURSOR_ON;
        static const string COLOR_DEFAULT;
        static const string COLOR_GREEN;
        static const string COLOR_RED;
    };

    class tick
    {
    public:
        static const __useconds_t loopTime;
    };
}


#endif //SCARLETTRPG_CONSANTS_H
