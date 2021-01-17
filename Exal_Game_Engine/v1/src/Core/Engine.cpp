#include "Engine.h"
#include <iostream>
#include "src/Graphics/TextureManager.h"
#include "src/Physics/Vector2D.h"
#include "src/Characters/Mage.h"
#include "src/Characters/Meteors.h"

SDL_Renderer* Engine::m_renderer = nullptr;
Mage* player = nullptr;
Meteors* meteors = nullptr;
Meteors* meteors1 = nullptr;
Meteors* meteors2 = nullptr;
Meteors* meteors3 = nullptr;
Meteors* meteors4 = nullptr;
Meteors* meteors5 = nullptr;
Meteors* meteors6 = nullptr;
Meteors* meteors7 = nullptr;
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
    
   
    player = new Mage();
    meteors = new Meteors(700  ,   0, 50, 50);
    meteors1 = new Meteors(1000, 200, 50, 50);
    meteors2 = new Meteors(1200, 400, 50, 50);
    meteors3 = new Meteors(1400, 600, 50, 50);
    meteors4 = new Meteors(1500, 800, 50, 50);
    meteors5 = new Meteors(1600, 300, 50, 50);
    meteors6 = new Meteors(1650, 250, 50, 50);
    meteors7 = new Meteors(1700, 150, 80, 80);
    texManager.load("backround", "src/assets/backround.png");
    texManager.load("gameover", "src/assets/game_over.png");
    
    return m_isRunning = true;
}

void Engine::update()
{

    meteors->update(0);
    meteors1->update(0);
    meteors2->update(0);
    meteors3->update(0);
    meteors4->update(0);
    meteors5->update(0);
    meteors6->update(0);
    meteors7->update(0);
    
    

}
void Engine::render()
{
    
    SDL_RenderClear(m_renderer);
    
    texManager.draw("backround", 0, 0, 640, 800);

    if(!player->check_collision(meteors)&& !player->check_collision(meteors1) 
    &&!player->check_collision(meteors2) &&!player->check_collision(meteors3) 
    &&!player->check_collision(meteors4) &&!player->check_collision(meteors5) 
    &&!player->check_collision(meteors6) &&!player->check_collision(meteors7))
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
    meteors->draw();
    meteors1->draw();
    meteors2->draw();
    meteors3->draw();
    meteors4->draw();
    meteors5->draw();
    meteors6->draw();
    meteors7->draw();
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