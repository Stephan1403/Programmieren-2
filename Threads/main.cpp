#include <stdio.h>
#include <iostream>
#include <string>
#include <thread>

#include "Line.cpp"

#define clear() printf("\033[H\033[J")





int main(){
    //clear
    clear();

    //star lines
    Line* s_line1 = new Line(75);
    Line* s_line2 = new Line(75);

    //word lines
    Line* w_line1 = new Line(75, " Hello world ");
    Line* w_line2 = new Line(75, " This is the first result using threads ");

}

