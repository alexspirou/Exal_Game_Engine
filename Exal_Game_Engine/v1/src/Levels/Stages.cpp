#include "Stages.h"
#include "src/Graphics/TextureManager.h"
Stages::Stages()
{
    meteors = new Meteors(700  ,   0, 50, 50);
    meteors1 = new Meteors(1000, 200, 50, 50);
    meteors2 = new Meteors(1200, 400, 50, 50);
    meteors3 = new Meteors(1400, 600, 50, 50);
    meteors4 = new Meteors(1500, 800, 50, 50);
    meteors5 = new Meteors(1600, 300, 50, 50);
    meteors6 = new Meteors(1650, 250, 50, 50);
    meteors7 = new Meteors(1700, 150, 80, 80);
    
}

Stages::~Stages()
{
    delete meteors, meteors1, meteors2, meteors3,meteors4, meteors5, meteors6, meteors7;
}

void Stages::level_1(){
    meteors->destRect =     {2500, 0, 200, 200};
    meteors1->destRect = {2300, 100, 20, 20};
    meteors2->destRect = {2100, 150, 50 ,50};
    meteors3->destRect = {1800, 200, 70, 70};
    meteors4->destRect = {1500, 400, 50, 50};
    meteors5->destRect = {1350, 500, 50, 50};
    meteors6->destRect = {1240, 550, 50, 50};
     meteors7->destRect = {1100, 600, 50, 50};
     
}
void Stages::level_2(){
    
    
}
void Stages::update(){
    
    meteors->update(0);
    meteors1->update(0);
    meteors2->update(0);
    meteors3->update(0);
    meteors4->update(0);
    meteors5->update(0);
    meteors6->update(0);
    meteors7->update(0);
}

void Stages::render(){
    meteors->draw();
    meteors1->draw();
    meteors2->draw();
    meteors3->draw();
    meteors4->draw();
    meteors5->draw();
    meteors6->draw();
    meteors7->draw();
    
    
}