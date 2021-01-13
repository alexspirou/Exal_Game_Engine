#include "Mage.h"

#include "SDL2/SDL.h"

    
    

Mage::Mage(Properties* props): Character(props)
{

    texManager.load("player","src/assets/character.png");



}
void Mage::draw()
{
    //texManager.drawFrame(m_textureID, m_x, m_y, m_width, m_height, m_row, m_frame);
    //    texManager.draw(m_textureID)
    texManager.draw("player", 100, 200, 60, 50);

}
void Mage::update(float dt)
{
    while (m_frameCount == 8)
        {
            m_frame = SDL_GetTicks()/m_animationSpeed;
            m_frameCount --;
        }
//    std::cout<<"Framecount: " << m_frame << std::endl;
 
}

void Mage::clean()
{
   texManager.clean();
}