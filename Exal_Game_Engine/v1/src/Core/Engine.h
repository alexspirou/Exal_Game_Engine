#ifndef _ENGINE_H_
#define _ENGINE_H_
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "src/Levels/Stages.h"

#include "src/Characters/Mage.h"
#include "src/Characters/Meteors.h"
#include "src/Graphics/TextureManager.h"
#include "src/Levels/Menu.h"
#include "src/Levels/BackGround.h"

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 800

class Engine
{
public:
    Engine() {}
    ~Engine() {delete [] player; delete []levels;}
    bool init(); //Whent the program starts create the need staff
    bool clean(); //Clean surfaces, renderers etc
    void update(); // Update events renders etc
    void render(); // Render all graphics
    void event(); //Handle the user's inputs
    void quit(); // Quit program, destroy what it needs to be destroyed
    void start_menu();
    //getters
    inline Mage* get_player(){return player;}
    //booleans
    inline bool isRunning() {return m_isRunning;}
    inline bool get_gameover() {return gameover;}
    
    static SDL_Renderer* m_renderer;
    static Mage* player;
    static bool gameover;
private:
    SDL_Window* m_window;
    bool m_isRunning;
    SDL_bool collision;
    Stages* levels = nullptr;
    TextureManager texManager;
    Menu* menu = nullptr;
    BackGround* background = nullptr;;

};
#endif // _ENGINE_H_