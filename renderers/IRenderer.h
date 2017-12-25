//
// Created by scarlett on 15-11-17.
//

#ifndef SCARLETTRPG_IRENDERER_H
#define SCARLETTRPG_IRENDERER_H


#include "../world.h"

namespace Renderers {
    class IRenderer {
    public:
        virtual void setWorld_ptr(World * world) = 0;
        virtual void tick() = 0;
        virtual void start() = 0;
    };
}


#endif //SCARLETTRPG_IRENDERER_H
