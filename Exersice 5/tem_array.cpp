#include <iostream>

template <class T>
class tem_array{
    public:
        tem_array(int a_size){
            this->size = a_size;
            values = new T[a_size];
        }
        ~tem_array(){
            std::cout << "Template array has been deleted" << std::endl;
        }


        //getter and setter
        T get(int index){
            if(index < this->size && index >= 0){
                return this->values[index];
            }
            return -1;
        }

        void set(int index, T value){
            if(index < this->size && index >= 0){
                this->values[index] = value;
            }else
                std::cout << "Couldn't acess index " << index << " in set value" << std::endl;
        }


        //size methods
        void resize(int a_size){
            T* a = new T[a_size];
            for(int i=0; i<a_size; i++){
                if(i < this->size){
                    a[i] = this->values[i];
                }else
                    break; //if i is higher than the array size all further values are higher, therefore break
        }
            this->size = a_size;
            this->values = new T[a_size];
            this->values = a;
        }

        int getSize(){
            return this->size;
        }

    private:
        int size;   //values fitting in the array
        T* values;    //create new array of the type T
};
