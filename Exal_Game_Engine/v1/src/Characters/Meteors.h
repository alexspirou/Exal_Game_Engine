#ifndef METEORS_H
#define METEORS_H
#include "src/Graphics/TextureManager.h"
#include "src/Physics/Transform.h"
#include  "vector"
#include "src/Physics/Vector2D.h"
#include "IObject.h"
class Meteors : public  IObject
{
public:
    Meteors(int x, int y, int w, int h);
    ~Meteors(){}
    void draw();
    void clean();
    SDL_Rect get_rect(){return destRect;}
    SDL_Rect destRect;
private:
    TextureManager texManager;
    
    
};
#endif // METEORS_H
