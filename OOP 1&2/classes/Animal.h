#pragma once

#include <string>
#include "DynamicObject.h"

class Animal : public DynamicObject{

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