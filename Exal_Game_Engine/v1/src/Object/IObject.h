#ifndef _IOBJECT_H_
#define _IOBJECT_H_

class IObject
{
public:
    
    virtual void draw()=0;
    virtual void update(float dt)=0;
    virtual void clean()=0;
    
};

#endif // _IOBJECT_H_
