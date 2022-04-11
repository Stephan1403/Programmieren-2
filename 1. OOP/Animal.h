#include <iostream>
#include <string>

#include "DynamicObject.cpp"

class Animal : public DynamicObject{
    public:
        //constructor
        Animal(std::string given_name, int given_age);
    
        bool init();
        void update();

    private:
        std::string name;
        int age;



};