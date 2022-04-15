#include <iostream>
#include <array>

#include "./classes/DynamicObject.h"
#include "./classes/Animal.h"
#include "./classes/Dog.h"
#include "./classes/Dragon.h"



int main(){
    //create objects
    DynamicObject* a1 = new Animal("mike", 12);
    printf("\n");
    DynamicObject* d1 = new Dog("Lu", 5, "puddle");
    printf("\n");
    DynamicObject* dr1 = new Dragon("Drew", 105, 5);
    printf("\n");

    //store objects in array
    std::array<DynamicObject*, 20> objects;

    objects[0] = a1;
    objects[1] = d1;
    objects[2] = dr1; 

    //show objects
    std::cout << std::endl << "Array output: " << std::endl;
    std::cout << objects.max_size() << std::endl;

    for(int i=0; i<2; i++){
        objects.at(i)->init();
        objects.at(i)->update();
    }


}