#include <iostream>
#include "./classes/Animal.h"
#include "./classes/Dog.h"
#include "./classes/Dragon.h"

int main(){
    Animal a1("fritz", 42);

    Animal* a2 = new Animal("Mike", 10);
    delete a2;

    printf("\n");
    
    Dog* d1 = new Dog("Lu", 100, "katze");
    delete d1;

    Dragon* dr1 = new Dragon("Phil", 8, 120);
    delete dr1;

    printf("\n");
}