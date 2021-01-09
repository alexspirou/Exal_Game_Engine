#ifndef _MAGE_H_
#define _MAGE_H_

#include "src/Characters/Character.h"
#include "src/Graphics/TextureManager.h"
class Mage: public Character
{
public:
    Mage(Properties* props);
    
    virtual void draw()override;
    virtual void clean() override;
    virtual void update(float dt) override;

private:
    int m_row, m_frame, m_frameCount, m_animationSpeed;
    TextureManager texManager;
};

#endif // _MAGE_H_
