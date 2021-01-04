#include "Engine.h"
#include <iostream>
#include "src/Graphics/TextureManager.h"

SDL_Renderer* Engine::m_renderer = nullptr;
TextureManager texManager;
bool Engine::init()
{       
        //Check if SDL is initialized
    if(SDL_Init(SDL_INIT_VIDEO)!= 0 )//|| IMG_Init(IMG_INIT_JPG || IMG_INIT_PNG)!= 0)
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


    //Load Image
   
    texManager.load("player","character.png");


        
    return m_isRunning = true;
}

void Engine::update()
{
    
}
void Engine::render()
{
    SDL_RenderClear(m_renderer);
    
    texManager.draw("palyer", 100, 100, 100 ,23);
    
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
    
}
void Engine::quit()
{

    m_isRunning = false;
    
}