#ifndef _MAGE_H_
#define _MAGE_H_
#include "src/Graphics/TextureManager.h"
#include <iostream>
#include "src/Characters/Meteors.h"
#include "src/Characters/Energy.h"
class Mage
{
public:
   
    Mage();
    void draw();
    void clean() ;
    void events();
    bool check_collision(Meteors *obj);
    bool check_collision(Energy *obj);
    void clear();
    bool freeze = false;
    void draw_explosion();
    inline SDL_Rect get_rect(){return destRect;}
    inline void set_rect(SDL_Rect f_rect){ destRect = f_rect;}
private:
    SDL_Rect srcRect, destRect;
    TextureManager texManager;
    SDL_bool collision;
};

#endif // _MAGE_H_
