#pragma once
    #include <iostream>
    #include <string>
    #include "Spieler.h"

class Spielfeld{
    public:
        //constructor
        Spielfeld(int spieler);

        void init(Spielfeld* s, std::string name1="Player1", std::string name2="Player2", std::string name3="Player3", std::string name4="Player4");

        //turn
        void turn();

    private:
        int anz_spieler;
        Spieler* players;
        int hole_at;

};
