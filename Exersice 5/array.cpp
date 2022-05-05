#include "array.h"

//constructor and destructor
array::array(int a_size){
    this->size = a_size;
    this->values = new int[size];

    std::cout << "Created a new Array for " << this->size << " values" << std::endl;
}

array::~array(){
    std::cout << "Deleted Array" << std::endl;
}

//other methods
int array::get(int index){
    if(index < this->size && index >= 0){
        return this->values[index];
    }
    return -1;
}

void array::set(int index, int value){
    if(index < this->size && index >= 0){
        this->values[index] = value;
    }
}

void array::resize(int a_size){
    int* a = new int[a_size];
    for(int i=0; i<a_size; i++){
        if(i < this->size){
            a[i] = this->values[i];
        }else
            break; //if i is higher than the array size all further values are higher, therefore break
    }

    this->size = a_size;
    this->values = new int[a_size];
    this->values = a;
}

int array::getSize(){
    return this->size;
}



