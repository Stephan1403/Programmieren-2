#include <iostream>
#include <string>

class Animal{

    public:
        Animal(std::string name, int age){
            std::cout << "Animal " << name << " has been created" << std::endl;
            this->name = name;
            this->age = age;
        }

        ~Animal(){
            std::cout << "Animal " << this->name << " ran away" <<std::endl;
        }

        bool init(){
            std::cout << "This object has been initiated" << std::endl; 
            return 0;
        }

        void update(){
            std::cout << "something has changed" << std::endl;
        }

    private:
        std::string name; 
        int age;
};