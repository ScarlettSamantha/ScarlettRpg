//
// Created by scarlett on 15-11-17.
//

#include "tile_type.h"
#include "helpers/constants.h"
#include <string>

using namespace std;


string TileType::display() {

    char c = this->convertNumber();
    return this->convertColor() + c;
}

string TileType::convertColor()
{
    switch(this->number)
    {
        default:
            return helpers::constants::cli::COLOR_DEFAULT;
        case 0:
            return helpers::constants::cli::COLOR_RED;
        case 1:
            return helpers::constants::cli::COLOR_GREEN;
        case 2:
            return helpers::constants::cli::COLOR_WHITE;
    }
}

char TileType::convertNumber()
{
    switch(this->number)
    {
        default:
            return '0';
            //Mounten
        case 0:
            return 'P';
        case 1:
            return '.';
            //Grass
        case 2:
            return '^';
        case 3:
            return 'C';
        case 4:
            return 'D';
        case 5:
            return 'E';
        case 6:
            return 'F';
        case 7:
            return 'G';
        case 8:
            return 'K';
        case 9:
            return 'L';
        case 10:
            return 'M';
    }
}
