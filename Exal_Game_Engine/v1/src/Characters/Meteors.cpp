#include "Meteors.h"

Meteors::Meteors(Properties* props): Enemy(props)
{
    texManager.load("meteor", "src/assets/meteor.png");
//    random.assign(n,  rand() % SCREEN_WIDTH  + 1);

    destRect.x = 700;
    destRect.y = 0;
    destRect.w = 50;
    destRect.h= 50;
}


void Meteors::update(float dt)
{
    
    destRect.x --;
    


    SDL_Delay(5);
}
void Meteors::draw()
{ 
    texManager.draw("meteor", destRect.x, destRect.y ,destRect.w, destRect.h);

//    
    //    texManager.draw("meteor",transforms->m_x, transforms->m_y,50, 50);
}

void Meteors::clean()
{
     texManager.clean();
}