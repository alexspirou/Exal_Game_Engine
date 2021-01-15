#include "Meteors.h"

Meteors::Meteors(Properties* props): Enemy(props)
{
    texManager.load("meteor", "src/assets/meteor.png");
//    random.assign(n,  rand() % SCREEN_WIDTH  + 1);
}


void Meteors::update(float dt)
{
    
     meteor_movement[0] + 1; 

    SDL_Delay(5);
}
void Meteors::draw()
{

    texManager.draw("meteor",meteor_movement[0], meteor_movement[1],50, 50);
    
}

void Meteors::clean()
{
     texManager.clean();
}