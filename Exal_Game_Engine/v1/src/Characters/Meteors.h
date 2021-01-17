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
    virtual ~Meteors(){}
    virtual void draw();
    virtual void update(float dt);
    virtual void clean();
    SDL_Rect get_rect(){return destRect;}
    SDL_Rect destRect;
private:
    TextureManager texManager;
    
    
};
#endif // METEORS_H
