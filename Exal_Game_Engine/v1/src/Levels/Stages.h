#ifndef STAGES_H
#define STAGES_H
#include "src/Characters/Meteors.h"

class Stages
{
public:
    Stages();
    ~Stages();

    void update();
    void render();
    void level_1();
    void level_2();
    Meteors* meteors = nullptr;
    Meteors* meteors1 = nullptr;
    Meteors* meteors2 = nullptr;
    Meteors* meteors3 = nullptr;
    Meteors* meteors4 = nullptr;
    Meteors* meteors5 = nullptr;
    Meteors* meteors6 = nullptr;
    Meteors* meteors7 = nullptr;
private:


};

#endif // STAGES_H
