#include <iostream>
#include <string>
#include "Animal.h"
#include "Dragon.h"

//constructor
Dragon::Dragon(std::string name, int alter, int size) : Animal(name, alter){
    this->size = size;
    std::cout << "The dragon " << name << " has been created" << std::endl;
}

//destructor
Dragon::~Dragon(){
    std::cout << "The dragon " << this->name << " is dead" << std::endl;
}

//other methods
void Dragon::spit_fire(){
    std::cout << "The dragon " << this->name << " is spiting fire" << std::endl;
}


