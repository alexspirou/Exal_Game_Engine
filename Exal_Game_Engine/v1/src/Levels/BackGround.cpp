#include "BackGround.h"
#include "src/Core/Engine.h"

BackGround::BackGround()
{   
    xpos_1 = 0;
    xpos_2 = 1200;
    texManager.load("background", "src/assets/backround3.png");
    texManager.load("gameover", "src/assets/game_over.png");
    texManager.load("again", "src/assets/play_again.png");
    texManager.load("win", "src/assets/Win/play_again.png");
}


BackGround::~BackGround()
{
}
void BackGround::render(){

    main_background();
    

}
void BackGround::main_background(){
    texManager.draw("background", xpos_1, 0, 1200, 1000);
    texManager.draw("background", xpos_2, 0, 1200, 900); 
}

void BackGround::gameover_background(){
    SDL_RenderClear(Engine::m_renderer);
    Engine::player->freeze = true;
    texManager.draw("background", 0, 0, 1000, 1000);
    texManager.draw("gameover", 250, 50, 528/2, 528/2);
    texManager.draw("again", 0, 300, 800, 100);
    SDL_RenderPresent(Engine::m_renderer);
}
void BackGround::win_background(){
    SDL_RenderClear(Engine::m_renderer);
    texManager.draw("background", 0, 0, 1000, 1000);
    texManager.draw("win", 0, 0, 800, 800);
    SDL_RenderPresent(Engine::m_renderer);

}

void BackGround::update(){
 
    xpos_1 --; xpos_2 --;
    if(xpos_1 < -1200)
        xpos_1 = 0;
    if(xpos_2 < 0)
        xpos_2 = 1200;
}    
