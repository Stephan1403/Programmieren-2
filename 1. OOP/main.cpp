#include <iostream>
#include <array>

//classes
#include "Animal.h"
#include "DynamicObject.cpp"


int main(){
    std::array<DynamicObject*, 20> objects;

    
    objects[objects.size()] = new Animal* ("Fritz", 42);

}

