#include "Mage.h"
#include "SDL2/SDL.h"
#include "Meteors.h"
Mage::Mage(): Character()
{

    texManager.load("player","src/assets/character.png");
    
    destRect.x = 50;
    destRect.y = 50;
    destRect.w = 60;
    destRect.h = 50;
}
void Mage::draw()
{
    
    texManager.draw("player", destRect.x, destRect.y, destRect.w, destRect.h);
    
}
void Mage::update(float dt)
{
  
}

void Mage::events()
{
    SDL_Event event;
    SDL_PollEvent(&event);    
    switch (event.type)
    {
        case SDL_KEYDOWN:
    
    {   
        if (event.key.keysym.sym == SDLK_RIGHT)
            destRect.x += 8.1;
            
        if (event.key.keysym.sym == SDLK_LEFT)
            destRect.x -= 8;
        if (event.key.keysym.sym == SDLK_UP)
            destRect.y -= 8;

        if (event.key.keysym.sym == SDLK_DOWN)
            destRect.y += 8;
    
        }
    }
}
bool Mage::check_collision(Meteors *p)
{
   
    if (SDL_HasIntersection(&destRect, &p->destRect))
    {
    return true;
    }else {return false;}
}
void Mage::clean()
{
   texManager.clean();
}

