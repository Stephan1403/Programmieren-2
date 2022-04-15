#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"

//constructor
Dog::Dog(std::string name, int alter, std::string breed) : Animal(name, alter){
    this->breed = breed;
    std::cout << "The dog " << this->name << " has been created" << std::endl;
}

//destructor
Dog::~Dog(){
    std::cout << "The dog " << this->name << " has been run over" << std::endl;
}

//other mehtods
void Dog::bark(){
    std::cout << "The dog " << this->name << " is barking" << std::endl;
}
