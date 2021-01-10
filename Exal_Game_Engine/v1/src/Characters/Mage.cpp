#include "Mage.h"

#include "SDL2/SDL.h"

    
    

Mage::Mage(Properties* props): Character(props)
{
    m_row = 1;
    m_frameCount = 8; 
    m_animationSpeed = 80;


}

void Mage::draw()
{
    texManager.drawFrame(m_textureID, m_transform->m_x, m_transform->m_y, m_width, m_height, m_row, m_frame);
    //    texManager.draw(m_textureID)
}
void Mage::update(float dt)
{
    m_frame = SDL_GetTicks()/m_animationSpeed % m_frameCount;
//    std::cout<<"Ticks: " << SDL_GetTicks() << std::endl;
 
}

void Mage::clean()
{
   texManager.clean();
}