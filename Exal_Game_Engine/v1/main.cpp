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
    //test code 


    
    // here
    
	Engine* engine = new Engine;
    engine->init();
    while (engine->isRunning())
    {
        //Handle all the inputs from user
        engine->event();
        //Update the changes
        engine->update();
        //Render the changes
        engine->render();
    }
    
    

	return 0;
}


