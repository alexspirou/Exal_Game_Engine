#ifndef METEORS_H
#define METEORS_H
#include "src/Characters/Enemy.h"
#include "src/Graphics/TextureManager.h"
#include "src/Physics/Transform.h"
#include  "vector"
#include "src/Physics/Vector2D.h"
class Meteors: public Enemy
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
    float m_x {0};
    float m_y {0};
    Vector2D meteor_movement{m_x, m_y};

    
};
#endif // METEORS_H
