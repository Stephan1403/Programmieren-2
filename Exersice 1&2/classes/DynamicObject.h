#pragma once

#include <iostream>

class DynamicObject{

    public:
        DynamicObject(){
            std::cout << "A dynamic object has been created" << std::endl;
        }

        virtual bool init() = 0; 

        virtual void update() = 0;
};