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

//opertoren überladung
void array::operator+(array& a){

    int smaller, higher;
    if(this->getSize() > a.getSize())
        smaller = a.getSize(), higher = this->getSize();
    else    
        smaller = this->getSize(), higher = a.getSize();


    for(int i=0; i<higher; i++){

        if(i<smaller){
            int value = this->get(i) + a.get(i);
            std::cout << "Array[" << i << "] = " << value << std::endl;
        }else{

            if(this->getSize() > a.getSize())
                std::cout << "Array[" << i << "] = " << this->get(i) << std::endl;
            else    
                std::cout << "Array[" << i << "] = " << a.get(i) << std::endl;
        }
    }

}

void array::operator-(array& a){
    int smaller, higher;
    if(this->getSize() > a.getSize())
        smaller = a.getSize(), higher = this->getSize();
    else    
        smaller = this->getSize(), higher = a.getSize();


    for(int i=0; i<higher; i++){

        if(i<smaller){
            int value = this->get(i) - a.get(i);
            std::cout << "Array[" << i << "] = " << value << std::endl;
        }else{

            if(this->getSize() > a.getSize())
                std::cout << "Array[" << i << "] = " << this->get(i) << std::endl;
            else    
                std::cout << "Array[" << i << "] = " << a.get(i) << std::endl;
        }
    }
}

void array::operator*(array& a){
    int smaller, higher;
    if(this->getSize() > a.getSize())
        smaller = a.getSize(), higher = this->getSize();
    else    
        smaller = this->getSize(), higher = a.getSize();


    for(int i=0; i<higher; i++){

        if(i<smaller){
            int value = this->get(i) * a.get(i);
            std::cout << "Array[" << i << "] = " << value << std::endl;
        }else{

            if(this->getSize() > a.getSize())
                std::cout << "Array[" << i << "] = " << this->get(i) << std::endl;
            else    
                std::cout << "Array[" << i << "] = " << a.get(i) << std::endl;
        }
    }
}
