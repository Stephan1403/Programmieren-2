#include <iostream>

#include "Animal.h"


Animal::Animal(std::string given_name, int given_age){
    this->name = given_name;
    this->age = given_age;
    std::cout << "A animal has been created" << std::endl;
}

bool Animal::init(){
    std::cout << "init object" << std::endl;
}

void Animal::update(){
    std::cout << "Wait, something has changed" << std::endl;
}