#include <string>
#include "Animal.h"


//dragon
class Dragon : public Animal{
    public:
        //constructor
        Dragon(std::string name, int alter, int size);

        //destructor
        ~Dragon();

        //other methods
        void spit_fire();

    private:
        int size;

};
