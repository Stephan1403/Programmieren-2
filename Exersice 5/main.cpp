#include <iostream>

#include "array.h"
#include "tem_array.cpp"


//operator überladen <<
void operator<<(std::ostream& COUT, array& A){
    printf("Size=%d", A.getSize());
    for(int i=0; i< A.getSize(); i++){
        std::cout << i << std::endl;
        COUT << "Array[" << i << "] = " << A.get(i) << std::endl;
    }
}



int main(){

    array* a = new array(3);
    a->set(0, 1);
    a->set(1, 2);
    a->set(2, 3);

    a->operator++(b);

}