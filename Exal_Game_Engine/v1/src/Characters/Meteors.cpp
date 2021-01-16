#include "Meteors.h"

Meteors::Meteors(Properties* props): Enemy(props)
{
    texManager.load("meteor", "src/assets/meteor.png");
//    random.assign(n,  rand() % SCREEN_WIDTH  + 1);
//    m_x = 700;
//    m_y = 0;
    meteor_vec.m_x = 700;
    meteor_vec.m_y = 0;
}


void Meteors::update(float dt)
{
    
    meteor_vec.increament_y(0.5);

    SDL_Delay(5);
}
void Meteors::draw()
{ 
    texManager.draw("meteor",meteor_vec.m_x ,       meteor_vec.m_y      ,30, 30);
//    texManager.draw("meteor",m_x + 200, m_y + 200,50, 50);
//    texManager.draw("meteor",m_x + 300, m_y + 400,50, 50);
//    texManager.draw("meteor",m_x + 500, m_y + 600,50, 50);
//    texManager.draw("meteor",m_x,       m_y      ,30, 30);
//    texManager.draw("meteor",m_x - 200, m_y + 200,50, 50);
//    texManager.draw("meteor",m_x - 300, m_y + 400,50, 50);
//    texManager.draw("meteor",m_x - 500, m_y + 600,50, 50);
    
    //    texManager.draw("meteor",transforms->m_x, transforms->m_y,50, 50);
}

void Meteors::clean()
{
     texManager.clean();
}