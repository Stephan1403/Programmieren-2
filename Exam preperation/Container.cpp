#include <iostream>
#include <vector>
#include <set>
#include <map>


#include <stdlib.h>
#include <time.h>

class User{

    public:
        User(){};
        User(std::string name, int id){
            this->name = name; 
            this->id = id;
        }   

        std::string get_name() const{
            return this->name;
        }

        int get_id() const{
            return this->id;
        }

/*
        // override <, pass const User
        bool operator <(const User& u) const{
            return this->id < u.id;
        }
*/

    private:
        std::string name; 
        int id;

};

class CompareUser{
    public:
        bool operator() (const User u1, const User u2) const{
            return u1.get_id() < u2.get_id();
        }
};


int main(){


    std::vector<User> my_vector;
    std::set<User, CompareUser> my_set;

    srand(time(nullptr));

    for(int i=0; i<10; i++){
        std::string user_name = "user " + std::to_string(i);
        User u=  User(user_name, rand()%10);
        my_vector.push_back(u);

        my_set.insert(u);                       // Insert user to set
    }

    
    for( auto it = my_set.begin(); it != my_set.end(); it++){
        std::cout << it->get_name() << " id=" << it->get_id() << std::endl;
    }
    

    std::map<int, User> my_map;

    my_map.insert( std::pair<int, User>(42, User("first name", 42)) );
    my_map[1010] = User("2. name", 100);


    std::map<int, User>::iterator it;
    it = my_map.find(42);

    if(it != my_map.end()){
        std::cout << it->second.get_name() << std::endl;
    }



}