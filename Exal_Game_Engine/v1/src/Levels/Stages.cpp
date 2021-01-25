#include "Stages.h"
#include "src/Graphics/TextureManager.h"
#include <iostream>
#include "src/Core/Engine.h"
Stages::Stages()
{
    meteors.resize(12, nullptr);
    m_destRect.resize(12);
    for(std::size_t i{0}; i<meteors.size(); i++)
        meteors.at(i) = new Meteors(0, 0, 0, 0);
}

Stages::~Stages()
{
    delete [] &meteors;
}
bool Stages::level_1(){
    
        meteors.at(0)->destRect =  {1200, 300, 100, 100};
        meteors.at(1)->destRect = {1400, 50, 50, 50};
        meteors.at(2)->destRect = {1600, 250, 50 ,50};
        meteors.at(3)->destRect = {1700 ,100, 50, 50};
        meteors.at(4)->destRect = {1800, 400, 50, 50};
        meteors.at(5)->destRect = {1100, 500, 50, 50};
        meteors.at(6)->destRect = {1500, 550, 50, 50};
        meteors.at(7)->destRect = {1100, 600, 50, 50};
        meteors.at(8)->destRect = {1650, 550, 50, 50};
        meteors.at(9)->destRect = {2040, 650, 50, 50};
        meteors.at(10)->destRect = {1740, 700, 80, 80};
        //store init pos for reset the level
        for(std::size_t i{0}; i<meteors.size(); i++)
            m_destRect.at(i) = meteors.at(i) ->destRect;
    return true;
}
bool Stages::level_2(){
//level2     
}
void Stages::update(){
if(!is_gameover()){
   for(std::size_t i{0}; i<meteors.size(); i++){
        meteors.at(i)->destRect.x --;
        if (meteors.at(i)->destRect.x < -100)
            meteors.at(i)->destRect.x = 1000;
        }
    }
}

void Stages::render(){
   for(std::size_t i{0}; i<meteors.size(); i++)
        meteors.at(i)->draw();
}
bool Stages::check_colission(){
    
   for(std::size_t i{0}; i<meteors.size() -2; i+=2)
       for(std::size_t j{1}; j<meteors.size() -1; j+=2)
            if(!Engine::player->check_collision(meteors.at(i)) && !Engine::player->check_collision(meteors.at(j)))
                return true;
            else
                return false;
}
void Stages::reset_level(){
    for(std::size_t i{0}; i<meteors.size(); i++)
         meteors.at(i)->destRect = {m_destRect.at(i).x,m_destRect.at(i).y,m_destRect.at(i).h,m_destRect.at(i).w};
         Engine::player->clear();
    
}

//void Stages::freeze(){
//    
//    for(std::size_t i{0}; i<meteors.size(); i++)
//        meteors.at(i)->destRect = {m_destRect.at(i).x,m_destRect.at(i).y, m_destRect.at(i).h, m_destRect.at(i).w};
//        
//}