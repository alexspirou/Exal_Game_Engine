#include "Engine.h"
#include <iostream>
SDL_Renderer* Engine::m_renderer = nullptr;
Mage* Engine::player = nullptr;
bool Engine::init()
{    
    //Check if SDL is initialized
    if(SDL_Init(SDL_INIT_EVERYTHING)!= 0 ){
        SDL_Log("Fail to init SDL: %s", SDL_GetError());
        return m_isRunning = false;
    }else{SDL_Log("SDL init ");}
    //Create Window
    m_window = SDL_CreateWindow("Exal Game Enginge", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,SCREEN_HEIGHT,SCREEN_WIDTH, 0);
    if (m_window == nullptr){
            SDL_Log("Fail to create widnow: %s", SDL_GetError());
            return false;
        }
    //Create Renderer
    if (m_renderer = SDL_CreateRenderer(m_window, -1, 0)){
            SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);
    }
    else if (m_renderer = nullptr){
        SDL_Log("Fail to create renderer: %s", SDL_GetError());
    }
    menu = new Menu();
    player = new Mage();
    levels = new Stages();
    texManager.load("backround", "src/assets/backround3.png");
    texManager.load("gameover", "src/assets/game_over.png");
    texManager.load("again", "src/assets/play_again.png"); 
    texManager.load("menu", "src/assets/start_menu.png");
    
    return m_isRunning = true;
}
void Engine::start_menu(){
    SDL_RenderClear(m_renderer);
    while(menu->get_menu()){
        menu->render();
        event();
        if(!menu->get_menu()){
            levels->level_1();
            break;
        }
    SDL_RenderPresent(m_renderer);

    }
    
}  
void Engine::update(){
        
    levels->update();
}
void Engine::render()
{   
    if(!levels->is_gameover() && !menu->get_menu()){
        if(levels->get_b_menu()){
        }
            SDL_RenderClear(m_renderer);
            player->freeze = false;
            texManager.draw("backround", 0, 0, 1000, 1000);
            levels->render(); 
            //While game is on
            if (!levels->check_colission_meteors()){
                player->draw();
                levels->check_colission_energies();
                levels->render_counter();
            //Gameover 
            }else{
                levels->set_gameover(true);
                if(levels->is_gameover()){
                    SDL_RenderClear(m_renderer);
                    player->freeze = true;
                    texManager.draw("backround", 0, 0, 1000, 1000);
                    texManager.draw("gameover", 250, 50, 528/2, 528/2);
                    texManager.draw("again", 0, 300, 800, 100);
                    SDL_RenderPresent(m_renderer);
                    event();
                }
        
            }
            SDL_Delay(5);
            SDL_RenderPresent(m_renderer);
    }
}   
void Engine::event()
{
    menu->events();
    player->events();
    SDL_Event event;
    SDL_PollEvent(&event);    
    switch (event.type)
    {
        case SDL_QUIT:
            quit();
            break;
        case SDL_KEYDOWN:
            if (event.key.keysym.sym == SDLK_F2)
               
                levels->reset_level();
                levels->set_gameover(false);
            if (event.key.keysym.sym == SDLK_F3){
                levels->reset_level();
                levels->level_2();
                levels->set_b_level_1(false);
            }
            if (event.key.keysym.sym == SDLK_F4){
                levels->reset_level();
                levels->level_1();
                levels->set_b_level_2(false);
            }
            
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
    menu->set_menu(false);
    levels->set_gameover(false);
    m_isRunning = false;
    
}