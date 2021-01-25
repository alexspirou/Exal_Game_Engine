#include "Meteors.h"

Meteors::Meteors(int x, int y, int w, int h)
{
    texManager.load("meteor", "src/assets/meteor.png");
    destRect.x = x;
    destRect.y = y;
    destRect.w = w;
    destRect.h= h;
}
void Meteors::draw()
{ 
    texManager.draw("meteor", destRect.x, destRect.y ,destRect.w, destRect.h);
}
void Meteors::clean()
{
     texManager.clean();
}