#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_
#include "src/Object/IObject.h"
#include "src/Physics/Transform.h"
#include "src/Core/Engine.h"
#include <iostream>
struct Properties{
    
public:
    Properties(const char* pr_textureID, int p_x, int p_y, int p_width, int p_height, SDL_RendererFlip flip = SDL_FLIP_NONE){
        X = p_x; //p vars = when the constructro called values
        Y = p_y;
        Flip = flip;
        Width = p_width;
        Height = p_height;
        TextureID = pr_textureID;
    }
public:    
    const char* TextureID;
    int Width, Height;
    float X, Y;
    SDL_RendererFlip Flip;
};

class GameObject : public IObject
{
public:
    GameObject(Properties* props)
    {
        m_textureID = props->TextureID;
        m_width = props->Width;
        m_height = props->Height;
        m_flip = props->Flip;
        m_transform = new Transform(props->X, props->Y);
    }
    virtual void draw() = 0 ;
    virtual void clean() = 0 ;
    virtual void update(float dt) = 0;
    
    
protected:

    Transform* m_transform;
    int m_width, m_height;
    const char* m_textureID;
    SDL_RendererFlip m_flip;
};

#endif // _GAMEOBJECT_H_
