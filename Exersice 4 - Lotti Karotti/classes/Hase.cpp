#include "Hase.h"

Hase::Hase(int feld){
    this->position = feld;
    this->alive = true;
}

void Hase::move(int felder){
    this->position += felder;
}

void Hase::eliminate(){
    this->alive = false;
}