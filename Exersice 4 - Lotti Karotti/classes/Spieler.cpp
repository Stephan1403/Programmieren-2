#include <iostream>
#include <string>
#include <stdlib.h>

#include "Spieler.h"

//constructors
Spieler::Spieler(){
    std::cout << "A player has been created" << std::endl;
}

Spieler::Spieler(std::string name){
    this->name = name;
}

//draw card
void Spieler::draw_card(){
     //random number between 0 and 3
    srand(std::time(nullptr));
    int card = rand()%4;

    if(card == 0){
        //s->turn();
    }else{
        //move hase, check for legal moves create new one in case
    }

}

