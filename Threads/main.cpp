/*
first and third line writing text wich is moving 
seconde line is moving from left to right (*   *   *   *)

*/
#include <stdio.h>
#include <iostream>
#include <string>
#include <thread>
#include <unistd.h>

#include "Line.cpp"

#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

//animated text writing character for character
void writeLine(std::string text, int line, int length){
    
    gotoxy(1, line);                            //set cursor

    for(int i=0; i<20; i++)                     //print 20 x per line
        printf("x");

    gotoxy(1, line);
    for(int l=1; l<=text.length(); l++)
        printf("%c", text.at(l-1));


}


//write moving stars in line "line" for length "length" from left to right
void write_line(int line, int length){
    
    Line* l = new Line(length);
    l->set_stars();
    l->set_d_left();

    while(true){
        gotoxy(1, line);

        std::cout << l->get_frame() << std::endl;
        l->next();

        usleep(1000 * 50);
    }
    
}








int main(){
    //clear
    clear();

    //write line
    write_line(2, 75);
    write_line(3, 75);


}

