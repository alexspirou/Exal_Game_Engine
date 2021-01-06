#ifndef _MAGE_H_
#define _MAGE_H_

#include "src/Characters/Character.h"


class Mage: public Character
{
public:
    Mage(Properties* props);
    
    virtual void draw();
    virtual void clean();
    virtual void update(float dt);

private:
    int m_row, m_frame, m_frameCount, m_animationSpeed;
};

#endif // _MAGE_H_
