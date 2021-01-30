#ifndef MENU_H
#define MENU_H
#include "src/Graphics/TextureManager.h"
class Menu
{
public:
    Menu();
    ~Menu();
    void update();
    void render();
    void events();
    inline bool get_menu(){return b_menu;}
    inline void set_menu(bool f_menu){b_menu = f_menu; }
private:
TextureManager texManager;
bool b_menu = true;
int flag = 0;
};

#endif // MENU_H
