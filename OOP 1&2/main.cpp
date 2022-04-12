#include <iostream>
#include "Animal.cpp"

int main(){
    Animal a1("fritz", 42);
    
    Animal* a2 = new Animal("Mike", 10);
    delete a2;
}