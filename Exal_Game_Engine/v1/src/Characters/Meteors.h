#ifndef METEORS_H
#define METEORS_H
#include "src/Characters/Character.h"
#include "src/Graphics/TextureManager.h"
#include "src/Physics/Transform.h"
class Meteors: public Character
{
public:
    Meteors(Properties* props);
    ~Meteors(){}
    virtual void draw();
    virtual void update(float dt);
    virtual void clean();
    
    
private:
    TextureManager texManager;
    Transform transforms;
};

#endif // METEORS_H
