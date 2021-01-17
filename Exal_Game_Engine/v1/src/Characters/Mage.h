#ifndef _MAGE_H_
#define _MAGE_H_
#include "src/Characters/Character.h"
#include "src/Graphics/TextureManager.h"
#include <iostream>
#include "src/Characters/Meteors.h"
class Mage: public Character
{
public:
   
    Mage();
    
    virtual void draw()override;
    virtual void clean() override;
    virtual void update(float dt) override;
    void events();
    bool check_collision(Meteors *obj);
private:
    SDL_Rect srcRect, destRect;
    TextureManager texManager;
    SDL_bool collision;

    
};

#endif // _MAGE_H_
