#include "TextureManager.h"
#include <iostream>
#include "src/Core/Engine.h"


bool TextureManager::load(const char* id, const char* filename)
{
    SDL_Surface* surface = IMG_Load(filename);
    if(surface)
    {
        SDL_Log("Image loaded in location:  %s", filename);
    }
    else
    {
        SDL_Log("Error to load image %s", SDL_GetError); return false;
    }
    
    SDL_Texture* texture = SDL_CreateTextureFromSurface(Engine::m_renderer, surface);
    if(texture){SDL_Log("Texture Created");}
    else{SDL_Log("Error to create texture %s", SDL_GetError()); return false;}
    
    m_textureMap[id] = texture;
    return true;
}

void TextureManager::draw(const char* id, int x, int y, int width, int height, SDL_RendererFlip flip )
{
    SDL_Rect srcRect = {0 ,0, width, height};
    SDL_Rect dstRect = {x, y, width, height};
    SDL_RenderCopyEx(Engine::m_renderer, m_textureMap[id], NULL, &dstRect, NULL , NULL, flip);
}

void TextureManager::drop(const char* id)
{
    
}
void TextureManager::clean()
{
    
}