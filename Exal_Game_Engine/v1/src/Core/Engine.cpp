#include "Engine.h"
#include <iostream>
#include "src/Graphics/TextureManager.h"
#include "src/Physics/Vector2D.h"
#include "src/Characters/Mage.h"
#include "src/Characters/Meteors.h"
#include "src/Levels/Stages.h"
SDL_Renderer* Engine::m_renderer = nullptr;
Mage* player = nullptr;
TextureManager texManager;
Stages* levels = nullptr;
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
    
   
    player = new Mage();
    levels = new Stages();
    texManager.load("backround", "src/assets/backround.png");
    texManager.load("gameover", "src/assets/game_over.png");
     levels->level_1();
    return m_isRunning = true;
}

void Engine::update(){
        
    levels->update();
}
void Engine::render()
{
    
    SDL_RenderClear(m_renderer);
    
    texManager.draw("backround", 0, 0, 640, 800);
    levels->render();
    if(!player->check_collision(levels->meteors)&& !player->check_collision(levels->meteors1) 
    &&!player->check_collision(levels->meteors2) &&!player->check_collision(levels->meteors3) 
    &&!player->check_collision(levels->meteors4) &&!player->check_collision(levels->meteors5) 
    &&!player->check_collision(levels->meteors6) &&!player->check_collision(levels->meteors7))
        {
            player->draw();
        }
    else{
        gameover = true;
        while(gameover)
            {
            SDL_RenderClear(m_renderer);
            texManager.draw("gameover", 120, 50, 528, 528);
            SDL_RenderPresent(m_renderer);
            }        
        }   
  
    SDL_Delay(5);
    SDL_RenderPresent(m_renderer);
}
void Engine::event()
{
    player->events();
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