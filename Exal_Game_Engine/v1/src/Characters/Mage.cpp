#include "Mage.h"
#include "SDL2/SDL.h"

Mage::Mage(Properties* props): Character(props)
{
    texManager.load("player","src/assets/character.png");
    m_x = m_y = 50;
}
void Mage::draw()
{
    texManager.draw("player", m_x, m_y, 60, 50);
}
void Mage::update(float dt)
{
  
    SDL_Event event;
    SDL_PollEvent(&event);    
    switch (event.type)
    {
        case SDL_KEYDOWN:
    
    {   
        if (event.key.keysym.sym == SDLK_RIGHT)
            m_x += 8.1;
            std::cout<<"X: "<<m_x<<std::endl;
        if (event.key.keysym.sym == SDLK_LEFT)
            m_x -= 8;
            std::cout<<"X: "<<m_x<<std::endl;
        if (event.key.keysym.sym == SDLK_UP)
            m_y -= 8;
            std::cout<<"Y: "<<m_y<<std::endl;

        if (event.key.keysym.sym == SDLK_DOWN)
            m_y += 8;
            std::cout<<"Y: "<<m_y<<std::endl;
    
        }
    }
}
void Mage::clean()
{
   texManager.clean();
}

