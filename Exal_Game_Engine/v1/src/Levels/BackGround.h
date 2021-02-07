#ifndef BACKGROUND_H
#define BACKGROUND_H
#include "src/Graphics/TextureManager.h"
class BackGround
{
public:
    BackGround();
    ~BackGround();
    void update();
    void render();
    void main_background();
    void gameover_background();
    void win_background();
private:
    TextureManager texManager;
    int xpos_1, xpos_2;
};
#endif // BACKGROUND_H
