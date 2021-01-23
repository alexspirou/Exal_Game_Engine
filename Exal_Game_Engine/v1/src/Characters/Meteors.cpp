#include "Meteors.h"

Meteors::Meteors(int x, int y, int w, int h): Enemy()
{
    texManager.load("meteor", "src/assets/meteor.png");
//    random.assign(n,  rand() % SCREEN_WIDTH  + 1);

    destRect.x = x;
    destRect.y = y;
    destRect.w = w;
    destRect.h= h;
    
}


void Meteors::update(float dt)
{

        
//    destRect.x --;
//
//    if (destRect.x < -100)
//            destRect.x =900;
////    std::cout << destRect.x << std::endl
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