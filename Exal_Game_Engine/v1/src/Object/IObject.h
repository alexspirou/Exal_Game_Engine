#ifndef _IOBJECT_H_
#define _IOBJECT_H_

class IObject
{
public:
    
    virtual void draw()=0;
    virtual void update()=0;
    virtual void clean(float dt)=0;
    virtual ~IObject();
};

#endif // _IOBJECT_H_
