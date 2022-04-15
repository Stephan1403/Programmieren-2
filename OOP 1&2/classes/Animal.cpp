#include <iostream>
#include <string>
#include "Animal.h"


//constructor
Animal::Animal(std::string name, int age){
    std::cout << "Animal " << name << " has been created" << std::endl;
    this->name = name;
    this->age = age;
}

//destructor
Animal::~Animal(){
    std::cout << "Animal " << this->name << " has been deleted" <<std::endl;
}

//other methods
bool Animal::init(){
    std::cout << "This object has been initiated" << std::endl; 
    return 0;
}

void Animal::update(){
    std::cout << "something has changed" << std::endl;
}