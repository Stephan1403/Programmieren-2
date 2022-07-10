#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <condition_variable>

/*
std::string global_value = "";  // Var: func_1 is writing; func_2 reading
std::condition_variable cond;   // Define condition variable
bool done = false;              // If already written
std::mutex globalmutex;         // Define mutex for threads


void func_1(){
    std::unique_lock<std::mutex> lock(globalmutex); // Lock func_1
    global_value = "Hello World";   
    done = true;
    cond.notify_one();                              // Notify func_2 that func_1 has written
}

const void func_2(){
    std::unique_lock<std::mutex> lock(globalmutex); // Lock in same mutex as func_1
    while(!done){
        cond.wait(lock);                            // Wait until notified by func_1
    }
    std::cout << global_value <<  std::endl;        // Write value
}
*/



std::mutex global_mutex;
std::string gloabl_value = "none";
std::condition_variable cond;



void func_1(){
    std::unique_lock<std::mutex> lock(global_mutex);
    gloabl_value = "Hello World";
    cond.notify_one();
}



void func_2(){
    std::unique_lock<std::mutex> lock(global_mutex);
    cond.wait(lock);
    std::cout << gloabl_value << std::endl;
}

int main(){



    std::thread t2(func_2);
    std::thread t1(func_1);
    
    t1.join();
    t2.join();



}



