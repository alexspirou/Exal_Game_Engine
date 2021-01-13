#include "Meteors.h"

Meteors::Meteors(Properties* props): Character(props)
{
    texManager.load("meteor", "src/assets/meteor.png");
}


void Meteors::update(float dt)
{
    transforms.m_y =transforms.m_y +0.1;
    if(transforms.m_y >= 800)
    {
        transforms.m_y = 0;
    }
    
}

void Meteors::draw()
{
    texManager.draw("meteor",transforms.m_x, transforms.m_y, 50, 50);
    texManager.draw("meteor",transforms.m_x +200,transforms.m_y +200, 50, 50);
}

void Meteors::clean()
{
     texManager.clean();
}