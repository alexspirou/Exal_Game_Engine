#ifndef _MAGE_H_
#define _MAGE_H_

#include "src/Characters/Character.h"
#include "src/Graphics/TextureManager.h"
#include <iostream>
class Mage: public Character
{
public:
   
    Mage(Properties* props);
    
    virtual void draw()override;
    virtual void clean() override;
    virtual void update(float dt) override;
   

private:
    double m_x, m_y;
    SDL_Rect srcRect, dstRect;
    TextureManager texManager;
  
};

#endif // _MAGE_H_
