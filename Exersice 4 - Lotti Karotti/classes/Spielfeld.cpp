#include <iostream>
#include <stdlib.h>
#include "Spielfeld.h"
#include "Spieler.h"

//constructor
Spielfeld::Spielfeld(int spieler, std::string name1, std::string name2, std::string name3, std::string name4){
    if(spieler>=2 && spieler<=4){
        //put names in array
        std::string* names = new std::string[4];
        names[0] = name1;
        names[1] = name2;
        names[2] = name3;
        names[3] = name4;

        //create players
        this->players = new Spieler[spieler];
        for(int i=0; i<spieler; i++){
            this->players[i] = Spieler(names[i]);   
        }

        //set hole_at
        this->hole_at = 0;

    }else{
        std::cout << "Please create a Spielfeld between 2 and 4 players" << std::endl;
    }
};


//turn
void Spielfeld::turn(){
    //random number between 0 and 3
    srand(std::time(nullptr));
    int card = rand()%4;

    

}