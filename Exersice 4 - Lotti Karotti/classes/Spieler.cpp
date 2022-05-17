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
    this->hasen = new Hase[4];
    
}

//draw card
void Spieler::draw_card(){
     //random number between 0 and 3
    srand(std::time(nullptr));
    int card = rand()%4;

    if(card == 0){
        //TODO: turn field from here
        std::cout << "!!! Please turn the field !!!" << std::endl;
    }else{

        //choose right hase
        int index_hase = -1;
        int first_hase_pos = -1;

        for(int i=0; i<4; i++){
            //set living hase with highest pos
            if(this->hasen[i].is_alive()){
                if(this->hasen[i].get_pos() > first_hase_pos){
                    first_hase_pos = this->hasen[i].get_pos();
                    index_hase = i;
                }
            }
        }
        


    }

}

