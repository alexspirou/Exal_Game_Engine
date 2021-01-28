#include "Energy.h"

Energy::Energy(int x, int y, int w, int h) : IObject()
{
    destRect = {x, y, w, h};
    texManager.load("energy", "src/assets/energy.png");
}

Energy::~Energy()
{
}
void Energy::draw(){

texManager.draw("energy", destRect.x, destRect.y, destRect.w, destRect.h);
   
}
void Energy::clean(){
    
    
}