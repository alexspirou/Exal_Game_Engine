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
    meteors8 = new Meteors(1650, 250, 50, 50);
    meteors9 = new Meteors(1700, 150, 80, 80);
    meteors10 = new Meteors(1700, 150, 80, 80);
    xpos_vec.at(0) = 1740;
}

Stages::~Stages()
{
    delete meteors, meteors1, meteors2, meteors3,meteors4, meteors5, meteors6, meteors7, meteors8,
    meteors9, meteors10;
}

void Stages::level_1(){
    meteors->destRect =  {xpos_vec.at(0), 300, 100, 100};
    meteors1->destRect = {1890, 50, 50, 50};
    meteors2->destRect = {1940, 250, 50 ,50};
    meteors3->destRect = {2040, 100, 50, 50};
    meteors4->destRect = {1990, 400, 50, 50};
    meteors5->destRect = {1840, 500, 50, 50};
    meteors6->destRect = {1240, 550, 50, 50};
    meteors7->destRect = {1100, 600, 50, 50};
    meteors8->destRect = {1650, 550, 50, 50};
    meteors9->destRect = {2040, 650, 50, 50};
    meteors10->destRect = {1740, 700, 80, 80};
     
}
void Stages::level_2(){
    
    
}
void Stages::update(){
    
//    meteors->update(0);
//    meteors1->update(0);
//    meteors2->update(0);
//    meteors3->update(0);
//    meteors4->update(0);
//    meteors5->update(0);
//    meteors6->update(0);
//    meteors7->update(0);
//    meteors8->update(0);
//    meteors9->update(0);
//    meteors10->update(0);


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
    meteors8->draw();
    meteors9->draw();
    meteors10->draw();    
    
}