#include <iostream>
#include <stdlib.h>
#include "Spielfeld.h"
#include "Spieler.h"

//constructor
Spielfeld::Spielfeld(int spieler){
    if(spieler>=2 && spieler<=4){
        //create players
        this->anz_spieler = spieler;
        this->players = new Spieler[spieler];

        //set hole_at
        this->hole_at = 0;

    }else{
        std::cout << "Please create a Spielfeld between 2 and 4 players" << std::endl;
    }
};

void Spielfeld::init(Spielfeld* s, std::string name1, std::string name2, std::string name3, std::string name4){
    //put names in array
    std::string* names = new std::string[4];
    names[0] = name1;
    names[1] = name2;
    names[2] = name3;
    names[3] = name4;
    
    //set player names
    for(int i=0; i<this->anz_spieler; i++){
        this->players[i] = Spieler(names[i]);   
    }

    
}


//turn
void Spielfeld::turn(){
    //random number between 0 and 26
    srand(std::time(nullptr));
    int hole = rand()%27; 
    this->hole_at = hole;

    if(hole == 0){
        std::cout << "No rabbit has died" << std::endl;
    }else{
        for(int p=0; p<this->anz_spieler; p++){
            //iterate through players
            for(int h=0; h<4; h++){
                //iterate through rabbits
                Hase* hase = &((this->players)[p]).hasen[h];
                if( hase->get_pos() == hole){
                    //hole moved under rabbit
                    hase->eliminate();
                }
            }
        }

        std::cout << "Hole is not at " << this->hole_at << std::endl;
    }

}