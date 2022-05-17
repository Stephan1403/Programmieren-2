#pragma once
    #include <iostream>

class Hase{
    public: 
        Hase(); //dummy constructor
        Hase(int feld);

        //methods
        void move(int felder);

        //alive
        bool is_alive();
        void eliminate();

        int get_pos();
        void set_pos(int pos);


    private:
        int position;
        bool alive;
};