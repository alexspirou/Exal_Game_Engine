#include "SDL2/SDL.h"
#include <SDL2/SDL_image.h>
#include "src/Core/Engine.h"
#include "src/Graphics/TextureManager.h"
#include <iostream>
#include "src/Physics/Vector2D.h"
int main(int argc, char **argv)
{
    
    Vector2D vec{10, 20};
    Vector2D vec2 {20, 20};
    std::cout << vec2 << std:: endl;
    vec.print("v1",vec);
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


