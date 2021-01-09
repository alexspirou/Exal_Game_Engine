#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <map>
class TextureManager
{
public:
    TextureManager() {}
    ~TextureManager() {}
    
    bool load(const char* id, const char* filename);
    void drop(const char* id);
    void clean();
    
    void draw(const char* id, int x, int y, int width, int height, SDL_RendererFlip flip = SDL_FLIP_NONE);
    void drawFrame(const char* id, int x, int y, int width, int height, int row, int fram, SDL_RendererFlip flip = SDL_FLIP_NONE);
    
    std::map<const char*, SDL_Texture*> m_textureMap;

private:
    SDL_Rect srcRect;
};

#endif // TEXTUREMANAGER_H
