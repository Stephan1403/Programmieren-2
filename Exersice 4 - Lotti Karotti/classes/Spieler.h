#pragma once 
    #include <iostream>
    #include <string>
    #include "Hase.h"


class Spieler{

    public:
        Hase* hasen;    //TODO: move to private 

        //constructors
        Spieler(); //dummy constructor for dynamic creation
        Spieler(std::string name);

        //other methos
        void draw_card();


    private:
        //variables
        std::string name;

};