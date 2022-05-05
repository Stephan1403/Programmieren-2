#include <iostream>

#include "array.h"
#include "tem_array.cpp"


int main(){

    //array
    array* a = new array(3);

    std::cout << "Array size: " << a->getSize() << std::endl;
    a->set(1, 2);
    a->resize(2);
    std::cout << "Array size: " << a->getSize() << std::endl;
    std::cout << "Array at index 1: " << a->get(1) << std::endl;
    
    
    

    //tem_array
    tem_array<int>* t = new tem_array<int>(5);

    t->set(4, 5);
    std::cout << "Tem-array size: " << t->getSize() << std::endl;
    t->resize(3);
    std::cout << "Tem-array size: " << t->getSize() << std::endl;
    std::cout << "Array at index 4: " << t->get(4) << std::endl;
    
}