#include <iostream>


class Parent{
    public:
        Parent(std::string name){
            std::cout << "Parent con" << std::endl;
        }
        ~Parent(){
            std::cout << "End of parent" << std::endl;
        }

        void foo(){}
    private:
        std::string name;
};


class Child : public Parent{
    public:
        Child(std::string name, int age):Parent(name){
            std::cout << "Child constructor" << std::endl;
            this->age = age;
        }
        ~Child(){
            std::cout << "End of Child" << std::endl;
        }

        
       
        
    private:
        int age; 
};



//Prüfung 2007

int f(int n){
    if(n<=2) return 2; 

    return n*f(n-1) + (n-1)*f(n-2);
}


int f_it(int n){
    if(n<=2) return 2; 

    int last=2, last2=2, result; 
    for(int i=3; i<=n; i++){
        result = i*last + (i-1)*last2;
        last2 = last;
        last = result; 
    }
    return result;

}


int main(){


    std::cout << f_it(5) << std::endl; 



/*
    //Child c("Name", 42); 
    Parent* a = new Child("Name", 43);
    a->foo();
    (*a).foo();
    delete a;
*/

}