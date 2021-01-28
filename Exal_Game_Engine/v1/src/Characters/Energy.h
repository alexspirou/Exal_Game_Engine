#ifndef ENERGY_H
#define ENERGY_H
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "src/Graphics/TextureManager.h"
#include "IObject.h"
class Energy: public IObject
{
public:
    Energy(int x, int y, int w, int h);
    ~Energy();
    void draw();
    void clean();
    void drop();
    SDL_Rect get_rect(){return destRect;}
    SDL_Rect destRect;
private:
    TextureManager texManager;
};
#endif // ENERGY_H
