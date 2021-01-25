#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_
#include "src/Core/Engine.h"
#include "src/Object/IObject.h"
class GameObject : public IObject
{
public:

    ~GameObject(){}
    virtual void draw() = 0 ;
    virtual void clean() = 0 ;
    virtual void update(float dt) = 0;
    

};

#endif // _GAMEOBJECT_H_
