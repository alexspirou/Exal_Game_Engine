#ifndef STAGES_H
#define STAGES_H
#include "src/Characters/Meteors.h"
#include "src/Characters/Mage.h"
#include <vector>
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
    Meteors* meteors8 = nullptr;
    Meteors* meteors9 = nullptr;
    Meteors* meteors10 = nullptr;
    Mage* player = nullptr;
private:
    std::vector<int> xpos_vec;

};

#endif // STAGES_H
