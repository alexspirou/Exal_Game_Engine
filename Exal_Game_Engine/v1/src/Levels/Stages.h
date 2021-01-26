#ifndef STAGES_H
#define STAGES_H
#include "src/Characters/Meteors.h"
#include "src/Characters/Mage.h"
class Stages
{
public:
    Stages();
    ~Stages();

    void update();
    void render();
    bool check_colission();
    void level_1();
    void level_2();
    void reset_level();
    std::vector<Meteors*> meteors;
    inline bool is_gameover(){return gameover;}
    inline bool set_gameover(bool f_gameover){gameover =  f_gameover; }
    
    inline bool get_b_level_1(){return b_level_1;}
    inline bool set_b_level_1(bool f_lvl){b_level_1 = f_lvl;}
    inline bool get_b_level_2(){return b_level_1;}
    inline bool set_b_level_2(bool f_lvl){b_level_2 =  f_lvl; }
private:
    std::vector<SDL_Rect> m_destRect;
    bool gameover = false;
    bool b_level_1 = false;
    bool b_level_2 = false;

   

};
#endif // STAGES_H
