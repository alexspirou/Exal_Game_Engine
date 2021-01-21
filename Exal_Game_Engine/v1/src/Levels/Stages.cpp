#include "Stages.h"

Stages::Stages()
{
}

Stages::~Stages()
{
}

void Stages::level_1(){
    
    meteors = new Meteors(700  ,   0, 50, 50);
    meteors1 = new Meteors(1000, 200, 50, 50);
    meteors2 = new Meteors(1200, 400, 50, 50);
    meteors3 = new Meteors(1400, 600, 50, 50);
    meteors4 = new Meteors(1500, 800, 50, 50);
    meteors5 = new Meteors(1600, 300, 50, 50);
    meteors6 = new Meteors(1650, 250, 50, 50);
    meteors7 = new Meteors(1700, 150, 80, 80);
    
}
void Stages::level_2(){
    
    meteors = new Meteors(700  ,   0, 50, 50);
    meteors1 = new Meteors(1000, 200, 50, 50);
    meteors2 = new Meteors(1200, 400, 50, 50);
    meteors3 = new Meteors(1400, 600, 50, 50);
    meteors4 = new Meteors(1500, 800, 50, 50);
    meteors5 = new Meteors(1600, 300, 50, 50);
    meteors6 = new Meteors(1650, 250, 50, 50);
    meteors7 = new Meteors(1700, 150, 80, 80);
    
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