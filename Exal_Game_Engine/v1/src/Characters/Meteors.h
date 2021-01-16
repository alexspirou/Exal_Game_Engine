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
    ~Meteors(){delete transforms;}
    virtual void draw();
    virtual void update(float dt);
    virtual void clean();
    
    
private:
    TextureManager texManager;
    Transform* transforms = new Transform();
    float m_x, m_y;
Vector2D meteor_vec{m_x, m_y};

    
};
#endif // METEORS_H
