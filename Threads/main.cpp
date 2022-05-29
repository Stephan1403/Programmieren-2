#include <stdio.h>
#include <iostream>
#include <string>

#include <thread>

#include "Line.cpp"

#define clear() printf("\033[H\033[J")


void test(int a){
    std::cout << a << std::endl;
}


int main(){
    //clear
    clear();

    //star lines
    Line* s_line1 = new Line(75);
    Line* s_line2 = new Line(75);

    //word lines
    Line* w_line1 = new Line(75, " Hello world ");
    Line* w_line2 = new Line(75, " This is the first result using threads ");

w_line1->set_d_left();
    w_line1->print_animation(2);

    

    //define threads
    //std::thread t (&(Line::print_animation), &s_line1, 1);
    //t_s1.join();


    //std::thread t_w1(w_line1->print_animation, 2);


    //t_s1.join();
    //t_w1.join();

}

