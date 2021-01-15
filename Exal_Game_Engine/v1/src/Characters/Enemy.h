#ifndef ENEMY_H
#define ENEMY_H
#include "src/Object/GameObject.h"

class Enemy: public GameObject
{
public:
    Enemy(Properties* props): GameObject(props) {}
    
    virtual void draw() = 0;
    virtual void clean() = 0;
    virtual void update(float dt) = 0;
    
protected:
    
    const char* m_name;

};

#endif 
