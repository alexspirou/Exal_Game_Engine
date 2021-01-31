#ifndef STAGES_H
#define STAGES_H
#include "src/Characters/Meteors.h"
#include "src/Characters/Mage.h"
#include "src/Graphics/TextureManager.h"
class Stages
{
public:
    Stages();
    ~Stages();

    void update();
    void render();
    bool check_colission_meteors();
    bool check_colission_energies();
    void level_1();
    void level_2();
    void reset_level();
    void render_counter();
    //Getters
    inline bool is_gameover(){return gameover;}
    inline bool get_b_level_1(){return b_level_1;}
    inline bool get_b_level_2(){return b_level_1;}
    inline bool get_b_menu(){return b_menu;}
    inline int get_counter(){return energies_counter;}
    //Seters
    inline void set_gameover(bool f_gameover){gameover =  f_gameover; }
    inline void set_b_level_1(bool f_lvl){b_level_1 = f_lvl;}
    inline void set_b_level_2(bool f_lvl){b_level_2 =  f_lvl; }
    inline void set_menu(bool f_menu){b_menu = f_menu;}

private:
    std::vector<SDL_Rect> m_destRect;
    std::vector<SDL_Rect> e_destRect;
    std::vector<Meteors*> meteors;
    std::vector<Energy*> energies;
    bool gameover = false;
    bool b_level_1 = false;
    bool b_level_2 = false;
    bool b_menu = true;
    int energies_counter{0};
    TextureManager texManager;
   

};
#endif // STAGES_H
