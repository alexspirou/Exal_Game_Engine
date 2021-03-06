#include "Meteors.h"
#include <SDL2/SDL2_gfxPrimitives.h>

Meteors::Meteors(int x, int y, int w, int h) : IObject()
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