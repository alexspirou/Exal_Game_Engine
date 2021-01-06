#ifndef _CHARACTER_H_
#define _CHARACTER_H_
#include "src/Object/GameObject.h"

class Character: public GameObject
{
public:
    Character(Properties* props): GameObject(props) {}
    
    virtual void draw() = 0;
    virtual void clean() = 0;
    virtual void update(float dt) = 0;
    
protected:
    
    const char* m_name;

};

#endif // _CHARACTER_H_
