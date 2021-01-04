#include "SDL2/SDL.h"
#include <SDL2/SDL_image.h>
#include "src/Core/Engine.h"
#include "src/Graphics/TextureManager.h"
#include <iostream>
int main(int argc, char **argv)
{
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
    
    
    printf("hello world\n");
	return 0;
}


