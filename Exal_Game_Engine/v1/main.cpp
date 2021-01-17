#include "SDL2/SDL.h"
#include <SDL2/SDL_image.h>
#include "src/Core/Engine.h"
#include "src/Graphics/TextureManager.h"
#include <iostream>
#include "src/Physics/Vector2D.h"
#include "src/Physics/Transform.h"
#include "src/Object/IObject.h"
#include "src/Object/GameObject.h"




int main(int argc, char **argv)
{
    Engine* engine = nullptr;
    const int FPS  = 120;
    const int frameDelay = 1000/FPS;
    Uint32 frameStart{0};
    int frameTime{0};
    int a =0;
	engine = new Engine;
    engine->init();
    while (engine->isRunning())
    {
        frameStart = SDL_GetTicks();
        //Handle all the inputs from user
        engine->event();
        //Update the changes
        engine->update();
        //Render the changes
        engine->render();
    
      
    
//    frameTime = SDL_GetTicks() - frameStart;
//    
//    if (frameDelay > frameTime)
//        {
//            
//            SDL_Delay(frameDelay - frameTime);
//            
//        }
     
    }
    engine->clean();
    
   
	return 0;
}


