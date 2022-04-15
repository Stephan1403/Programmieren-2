#include <iostream>

class DynamicObject{

    protected:
        /*protected for the constructor works because DynamicObject is a pure virtual class 
        and therefore won't be created as a object istself*/
        DynamicObject(){
            std::cout << "A dynamic object has been created" << std::endl;
        }

        virtual bool init() = 0; 

        virtual void update() = 0;
};