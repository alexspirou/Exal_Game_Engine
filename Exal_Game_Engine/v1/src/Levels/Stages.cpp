#include "Stages.h"
#include "src/Graphics/TextureManager.h"
#include <iostream>
#include "src/Core/Engine.h"
#include <algorithm>
Stages::Stages()
{   
    texManager.load("counter", "src/assets/energies_left.png");
    texManager.load("1", "src/assets/1.png");
    texManager.load("2", "src/assets/2.png");
    texManager.load("3", "src/assets/3.png");
    texManager.load("4", "src/assets/4.png");  
    //Meteors init
    meteors.resize(12, nullptr);
    m_destRect.resize(12);
    for(std::size_t i{0}; i<meteors.size(); i++){
        meteors.at(i) = new Meteors(0, 0, 0, 0);
    }
    //Energies init
    energies.resize(4, nullptr);
    e_destRect.resize(4);
    for(size_t i{0}; i<energies.size(); i++){
        energies.at(i) = new Energy(0, 0, 0, 0);
    }
}

Stages::~Stages()
{
    delete [] &meteors;
    delete [] &energies;
}
void Stages::level_1(){
        //Meteors
        b_level_1 = true;
        std::cout << "---LEVEL1---" << std::endl;
        meteors.at(0)->destRect =  {1200, 300, 100, 100};
        meteors.at(1)->destRect = {1400, 50, 100, 100};
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
        //Energies
        energies.at(0)->destRect = {150, 50, 60, 60};
        energies.at(1)->destRect = {150, 500, 60, 60};
        energies.at(2)->destRect = {650, 50, 60, 60};
        energies.at(3)->destRect = {650, 500, 60, 60};
        //store init pos for reset the level
        for(std::size_t i{0}; i<energies.size();  i++)
                e_destRect.at(i) =  energies.at(i)->destRect;
}       


void Stages::level_2(){
//level2
        b_level_2 = true;
        std::cout << "---LEVEL2---" << std::endl;
        meteors.at(0)->destRect =  {1800, 300, 100, 100};
        meteors.at(1)->destRect = {1100, 50, 50, 50};
        meteors.at(2)->destRect = {1250, 250, 50 ,50};
        meteors.at(3)->destRect = {1692 ,100, 50, 50};
        meteors.at(4)->destRect = {1890, 400, 50, 50};
        meteors.at(5)->destRect = {1250, 500, 50, 50};
        meteors.at(6)->destRect = {1630, 550, 50, 50};
        meteors.at(7)->destRect = {1430, 600, 50, 50};
        meteors.at(8)->destRect = {1000, 550, 50, 50};
        meteors.at(9)->destRect = {1900, 650, 50, 50};
        meteors.at(10)->destRect = {1940, 700, 80, 80};
        //store init pos for reset the level
        for(std::size_t i{0}; i<meteors.size(); i++)
            m_destRect.at(i) = meteors.at(i) ->destRect;
}
void Stages::update(){
if(!is_gameover() && b_level_1){
   for(std::size_t i{0}; i<meteors.size(); i++){
        meteors.at(i)->destRect.x --;
        if (meteors.at(i)->destRect.x < -100)
            meteors.at(i)->destRect.x = 1000;
        }
    }
if(!is_gameover() && b_level_2){
   for(std::size_t i{0}; i<meteors.size(); i++){
        meteors.at(i)->destRect.x -= 1.5;
        if (meteors.at(i)->destRect.x < -100)
            meteors.at(i)->destRect.x = 1000;
        }
    }    
}
void Stages::render(){
    //energies
    for(std::size_t i{0}; i<energies.size(); i++)
        energies.at(i)->draw();
    //meteors
    for(std::size_t i{0}; i<meteors.size(); i++)
        meteors.at(i)->draw();
}
    
bool Stages::check_colission_meteors(){
    //Returns true if player has collision with meteors obj
    if(std::any_of(meteors.cbegin(), meteors.cend(), [] (const auto& i){return Engine::player->check_collision(i);})){
        return true;
    }
    else{
        return false;
    }

}
void Stages::reset_level(){
    for(std::size_t i{0}; i<meteors.size(); i++){
        meteors.at(i)->destRect = {m_destRect.at(i).x,m_destRect.at(i).y,m_destRect.at(i).h,m_destRect.at(i).w};
        }
        Engine::player->clear();
        energies_counter = 4;
    for(std::size_t i{0}; i<energies.size(); i++){
        energies.at(i)->destRect =  {e_destRect.at(i).x,e_destRect.at(i).y,e_destRect.at(i).h,e_destRect.at(i).w};
    }
}
//Energies
bool Stages::check_colission_energies(){
    
    for(std::size_t i{0}; i<energies.size(); i++){
        if(Engine::player->check_collision(energies.at(i))){
            energies.at(i)->destRect = {0,0,0,0};
            energies_counter --;

        }
    }
}

void Stages::render_counter(){
        texManager.draw("counter", 0, 500, 200, 200);

        if(energies_counter == 1){
                texManager.draw("1", 180, 460, 350, 250);
                texManager.draw("2", 0, 0, 0, 0);
                texManager.draw("3", 0, 0, 0, 0);
                texManager.draw("4", 0, 0, 0, 0);
        }
        else if(energies_counter== 2){
                 texManager.draw("1", 0, 0, 0, 0);
                texManager.draw("2", 180, 460, 350, 250);
                texManager.draw("3", 0, 0, 0, 0);
                texManager.draw("4", 0, 0, 0, 0);                       
        }
        else if(energies_counter == 3){
                texManager.draw("1", 0, 0, 0, 0);
                texManager.draw("2", 0, 0, 0, 0);            
                texManager.draw("3", 180, 490, 350, 200);
                texManager.draw("4", 0, 0, 0, 0);
        }
        else if(energies_counter == 4){
                texManager.draw("1", 0, 0, 0, 0);
                texManager.draw("2", 0, 0, 0, 0);
                texManager.draw("3", 0, 0, 0, 0);
                texManager.draw("4", 180, 460, 350, 250);
        }

}               
