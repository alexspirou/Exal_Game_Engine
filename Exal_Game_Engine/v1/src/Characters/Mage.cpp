#include "Mage.h"
#include "src/Graphics/TextureManager.h"
#include "SDL2/SDL.h"
TextureManager texManager;

Mage::Mage(Properties* props)
{
    m_row = 1;
    m_frameCount = 8; 
}

void Mage::draw()
{
    texManager.drawFrame(m_textureID,m_transform->m_x,m_transform->m_y, m_width, m_height, m_row, m_frame);
}

void Mage::update(float dt)
{
    m_frame = SDL_GetTicks()/m_animationSpeed % m_frameCount;
   
}

void Mage::clean()
{
   texManager.clean();
}