#include <iostream>

class array{
    public:
        array(int a_size);
        ~array();

        int get(int index);
        void set(int index, int value);

        void resize(int a_size);
        int getSize();

        //operatoren überladung
        void operator+(array& a);
        void operator-(array& a);
        void operator*(array& a);


    private:
        int size;   //values fitting in the array
        int* values;    //create new array
};

