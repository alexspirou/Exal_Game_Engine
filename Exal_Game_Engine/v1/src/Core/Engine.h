
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

    
    bool init();
    bool clean();
    void update();
    void render();
    void event();
    void quit();
    inline bool isRunning() {return m_isRunning;}
    static SDL_Renderer* m_renderer;
private:
    SDL_Window* m_window;
    bool m_isRunning;
};

#endif // _ENGINE_H_