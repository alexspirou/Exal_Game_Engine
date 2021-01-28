#include "Mage.h"
#include "SDL2/SDL.h"
#include "Meteors.h"
Mage::Mage()
{

    texManager.load("player","src/assets/character.png");
    texManager.load("explosion","src/assets/explosion.png");
    destRect.x = 50;
    destRect.y = 200;
    destRect.w = 60;
    destRect.h = 50;
}
void Mage::draw()
{
    
    texManager.draw("player", destRect.x, destRect.y, destRect.w, destRect.h);
    
}
void Mage::draw_explosion(){
    
    texManager.draw("explosion", destRect.x, destRect.y, destRect.w, destRect.h);

}

void Mage::events()
{
    SDL_Event event;
    SDL_PollEvent(&event); 
    switch (event.type)
    {
        case SDL_KEYDOWN:
    
    {
    if(!freeze){
        if (event.key.keysym.sym == SDLK_RIGHT)
            destRect.x += 12;
            
        if (event.key.keysym.sym == SDLK_LEFT)
            destRect.x -= 12;
        if (event.key.keysym.sym == SDLK_UP)
            destRect.y -= 12;

        if (event.key.keysym.sym == SDLK_DOWN)
            destRect.y += 12;
    
            }
        }
    }
}
bool Mage::check_collision(Meteors *p)
{
   
    if (SDL_HasIntersection(&destRect, &p->destRect))
        return true;
    else 
        return false;
}
bool Mage::check_collision(Energy *p)
{
   
    if (SDL_HasIntersection(&destRect, &p->destRect))
        return true;
    else 
        return false;
}
void Mage::clean()
{
   texManager.clean();
}
void Mage::clear(){
       destRect = {50, 200, 60, 50};
}


