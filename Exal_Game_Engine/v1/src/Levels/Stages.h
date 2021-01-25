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
    bool level_1();
    bool level_2();
    void freeze();
    void reset_level();
    std::vector<Meteors*> meteors;
    inline bool is_gameover(){return gameover;}
    inline bool set_gameover(bool f_gameover){gameover =  f_gameover; }
private:
    std::vector<SDL_Rect> m_destRect;
    bool gameover = false;

   

};
#endif // STAGES_H
