#pragma once 
    #include <iostream>
    #include <string>
    //#include "Spielfeld.h"
    #include "Hase.h"


class Spieler{

    public:
        //constructors
        Spieler(); //dummy constructor for dynamic creation
        Spieler(std::string name);

        //other methos
        void draw_card();

    private:
        //variables
        std::string name;
        Hase* hasen;


};