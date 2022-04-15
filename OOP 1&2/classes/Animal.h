#pragma once

#include <string>

class Animal{

    public:
        //constructor
        Animal(std::string name, int age);

        //destructor
        ~Animal();

        //other methods
        bool init();
        void update();

    protected:
        std::string name; 
        int age;
};