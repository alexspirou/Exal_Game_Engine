#ifndef _ENGINE_H_
#define _ENGINE_H_
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 800

class Engine
{
public:
    Engine() {}
    bool init(); //Whent the program starts create the need staff
    bool clean(); //Clean surfaces, renderers etc
    void update(); // Update events renders etc
    void render(); // Render all graphics
    void event(); //Handle the user's inputs
    void quit(); // Quit program, destroy what it needs to be destroyed
    inline bool isRunning() {return m_isRunning;}
    static SDL_Renderer* m_renderer;
    bool get_gameover() {return gameover;}
private:
    SDL_Window* m_window;
    bool m_isRunning;
    SDL_bool collision;
    bool gameover;

};
#endif // _ENGINE_H_