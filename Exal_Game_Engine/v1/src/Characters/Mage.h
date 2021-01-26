#ifndef _MAGE_H_
#define _MAGE_H_
#include "src/Characters/Character.h"
#include "src/Graphics/TextureManager.h"
#include <iostream>
#include "src/Characters/Meteors.h"
class Mage
{
public:
   
    Mage();
    void draw();
    void clean() ;
    void events();
    bool check_collision(Meteors *obj);
    void clear();
    bool freeze = false;
private:
    SDL_Rect srcRect, destRect;
    TextureManager texManager;
    SDL_bool collision;
};

#endif // _MAGE_H_
