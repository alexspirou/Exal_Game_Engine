#include "Engine.h"
#include <iostream>
#include "src/Graphics/TextureManager.h"
#include "src/Physics/Vector2D.h"
#include "src/Characters/Mage.h"
#include "src/Characters/Meteors.h"

SDL_Renderer* Engine::m_renderer = nullptr;
Mage* player = nullptr;
Meteors* meteors = nullptr;
TextureManager texManager;

bool Engine::init()
{       
        //Check if SDL is initialized
    if(SDL_Init(SDL_INIT_EVERYTHING)!= 0 )//|| IMG_Init(IMG_INIT_JPG || IMG_INIT_PNG)!= 0)
    {
        SDL_Log("Fail to init SDL: %s", SDL_GetError());
        return m_isRunning = false;
    }else{SDL_Log("SDL init ");}
    //Create Window
    m_window = SDL_CreateWindow("Exal Game Enginge", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,SCREEN_HEIGHT,SCREEN_WIDTH, 0);
    if (m_window == nullptr)
        {
            SDL_Log("Fail to create widnow: %s", SDL_GetError());
            return false;
        }
    //Create Renderer
    if (m_renderer = SDL_CreateRenderer(m_window, -1, 0))
        {
            SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);
        }
    else if (m_renderer = nullptr)
    {
        SDL_Log("Fail to create renderer: %s", SDL_GetError());
    }
    
   
    player = new Mage(new Properties("player", 100, 200, 250, 32));
    meteors = new Meteors(new Properties("meteor", 100, 200, 50, 50));
    texManager.load("backround", "src/assets/backround.png");
    
    
    return m_isRunning = true;
}

void Engine::update()
{
    meteors->update(0);
    player->update(0);
    player->events();

}
void Engine::render()
{
    SDL_RenderClear(m_renderer);
    
    texManager.draw("backround", 0, 0, 640, 800);
    if(!player->check_collision(meteors))
        {
            player->draw();
        }
    else{quit();}
    meteors->draw();
    meteors->draw();
    meteors->draw();
    SDL_RenderPresent(m_renderer);
}
void Engine::event()
{
     
    SDL_Event event;
    SDL_PollEvent(&event);    
    switch (event.type)
    {
        case SDL_QUIT:
            quit();
            break;
    }
    
}
bool Engine::clean()
{
    texManager.clean();
    SDL_DestroyRenderer(m_renderer);
    SDL_DestroyWindow(m_window);
    IMG_Quit();
    SDL_Quit();
}
void Engine::quit()
{

    m_isRunning = false;
    
    
}