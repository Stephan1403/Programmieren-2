#include <string>
#include "Animal.h"


//dog
class Dog : public Animal{
    public:
        //constructor
        Dog(std::string name, int alter, std::string breed);

        //destructor
        ~Dog();

        //other methods
        void bark();

    private:
        std::string breed;

};

