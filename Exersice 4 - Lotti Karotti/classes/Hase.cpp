#include "Hase.h"

Hase::Hase(){
    std::cout << "Created a new rabbit" << std::endl;
}

//is called at first use
Hase::Hase(int feld){
    this->position = feld;
    this->alive = true;
}

//methods
void Hase::move(int felder){
    this->position += felder;
}


//alive
bool Hase::is_alive(){
    return this->alive;
}


void Hase::eliminate(){
    this->alive = false;
    std::cout << "A rabbit has just been eliminated" << std::endl;
}


//position
int Hase::get_pos(){
    return this->position;
}

void Hase::set_pos(int pos){
    this->position = pos;
}
