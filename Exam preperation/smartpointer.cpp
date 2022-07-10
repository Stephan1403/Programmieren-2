#include <iostream>
#include <memory>
#include <vector>


class User{
    public:
        User(std::string name, int val){
            this->name = name;
            this->value = val;
        }

        int get_val(){
            return this->value;
        }

        void inc(){
            this->value++;
        }

    private:    
        std::string name;
        int value;
};

class A; class B;                                          // Predefinition

class A{
    public:
        std::weak_ptr<B> pointer;
        ~A(){ std::cout << "~A" << std::endl; }
};

class B{
    public:
        std::shared_ptr<A> pointer;
        ~B(){ std::cout << "~B" << std::endl; }
};


int main(){

/*
    std::shared_ptr<A> s_ptr_a = std::make_shared<A>( );
    std::shared_ptr<B> s_ptr_b = std::make_shared<B>( );
    (*s_ptr_a).pointer = s_ptr_b;
    (*s_ptr_b).pointer = s_ptr_a;


    //std::weak_ptr<User> w_ptr;

*/




/* Unique pointer
    std::unique_ptr<User> u_ptr;                            // Create unique_pointer
    u_ptr = std::make_unique<User>( User("User1", 10) );    // Make unique_pointer unique with new User

    (*u_ptr).inc();

    std::unique_ptr<User> u_ptr2(move(u_ptr));              // u_ptr isn't valid anymore, just u_ptr2
    //u_ptr2 = u_ptr;                                       // Not allowed (only one refrence at a time)

    (*u_ptr2).inc();
    std::cout << (*u_ptr2).get_val() << std::endl;

    std::unique_ptr<User> u_ptr;                            // New u_ptr, because the old has been deleted after move
    std::swap(u_ptr, u_ptr2);                               // Changing back the objects

    //u_ptr.release();                                      // Results in memory leak
    u_ptr.reset();                                          // Deletes object behind pointer
*/

    //Smart Pointer
    std::shared_ptr<User> s_ptr;                        // Create a shared pointer
    s_ptr = std::make_shared<User>( User("James", 2) ); // make shared

    std::shared_ptr<User> s_ptr2 = s_ptr;               // s_ptr2 points to same object as s_ptr 
    (*s_ptr).inc();                                     // Increment object value
    s_ptr2->inc();

    std::cout << (*s_ptr).get_val() << std::endl;       // 4
    std::cout << (*s_ptr2).get_val() << std::endl;      // 4 (Because pointer points to same object)

    s_ptr.reset();                                      // Delete refrence
    s_ptr2.reset();

    std::cout << s_ptr2.use_count() << std::endl;       // Count of smart_pointers = 0 (because of reset)

}

