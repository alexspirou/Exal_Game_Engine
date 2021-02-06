#include "Menu.h"
#include "src/Core/Engine.h"
Menu::Menu()
{
    texManager.load("no_choice", "src/assets/Menu/menu_clean.png");
    texManager.load("menu_play", "src/assets/Menu/menu_play.png");
    texManager.load("menu_difficulty", "src/assets/Menu/menu_difficulty.png");
    texManager.load("menu_levels", "src/assets/Menu/menu_levels.png");
    texManager.load("background", "src/assets/backround3.png");
    texManager.load("under_construction", "src/assets/Menu/under_construction.png");
}

Menu::~Menu()
{

}

void Menu::render(){
    if(flag == 0){
        SDL_RenderClear(Engine::m_renderer);
        texManager.draw("background", 0, 0, 1000, 1000);
        texManager.draw("menu_play", 0, 0, 800, 800);
        //std::cout << "Play: " << flag << std::endl;
        flag = 0;
    }
    if(flag == 1){
        SDL_RenderClear(Engine::m_renderer);
        texManager.draw("background", 0, 0, 1000, 1000);
        texManager.draw("menu_difficulty", 0, 0, 800, 800);
        //std::cout << "Diff: " << flag << std::endl;
        flag = 1;
    }
    if(flag == 2){
        SDL_RenderClear(Engine::m_renderer);
        texManager.draw("background", 0, 0, 1000, 1000);
        texManager.draw("menu_levels", 0, 0, 800, 800);
        //std::cout << "Lev: " << flag << std::endl;
        flag =2;
    }
    if(flag == 3){
        SDL_RenderClear(Engine::m_renderer);
        texManager.draw("background", 0, 0, 1000, 1000);
        texManager.draw("under_construction", 0, 0, 800, 800);
        flag = 3;
    }
    if(flag == 4){
        SDL_RenderClear(Engine::m_renderer);
        texManager.draw("background", 0, 0, 1000, 1000);
        texManager.draw("under_construction", 0, 0, 800, 800);
        flag = 4;
    }         
}   
    
//void Menu::difficulty(){
//    
//
//}

void Menu::update(){
    
    
}
void Menu::events(){
    
    if(b_menu){
        SDL_Event event;
        SDL_PollEvent(&event); 
        switch (event.type)
        {
            case SDL_KEYDOWN:
            {

                if (event.key.keysym.sym == SDLK_RIGHT){
                    while(flag<2){
                        std:: cout << "RIght " << flag << std::endl;
                        flag ++;
                        break;
                    }
                }
                if (event.key.keysym.sym == SDLK_LEFT){
                    while(flag!=0){
                        std:: cout << "Left " << flag << std::endl;
                        flag --;
                        break;
                    }
                }            
                if (event.key.keysym.sym == SDLK_SPACE){
                    switch(flag){
                        case 0:
                            b_menu = false;
                        case 1:
                            flag = 3;
                            break;
                        case 2:
                            flag = 4;
                            break;
                        break;
                    }
                }
                if (event.key.keysym.sym == SDLK_BACKSPACE){
                        flag = 0;
                    }
                               
            }
        }
    }
}