#include <iostream>
#include <stdio.h>
#include <string>
#include <unistd.h>
#include <thread>

#include "Line.h"

#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

//constructor
Line::Line(int l, std::string text, bool direc_is_right){
    //make sure length isn't too short
    if(!text.empty()){
        if(text.length() > l)
            l = text.length();
    }

    //set variables
    this->length = l;
    this->direc_is_right = direc_is_right;

    values = new char[l];

    //init values
    if(text.empty())
        this->set_stars();
    else
        this->set_word(text);
}


//turn line into star-line
void Line::set_stars(){
    this->set_d_left();                     //stars direction is by default left

    for(int i=0; i<this->length; i++){
        //iterate through array
        if(i%3 == 0)
            this->values[i] = '*';
        else
            this->values[i] = ' ';
    }
}

//turn line into word-line
void Line::set_word(std::string word){
    for(int i=0; i<this->length; i++){
        if(i<word.length()){
            this->values[i] = word.at(i);
            continue;
        }
        this->values[i] = '*';
    }
}


//set next frame
void Line::next(){
    if(this->direc_is_right){
        //dirrection right
        char c = this->values[length-1];    //last value
        char next_c = this->values[0];      //value wich will be removed next iteration

        for(int i=0; i<this->length; i++){
            this->values[i] = c;            //set current value

            c = next_c; 
            if(i < this->length-1)
                next_c = this->values[i+1];
            else
                next_c = this->values[0];
        }

    }else{
        //direction is not right
        char c = this->values[0];               //first value
        char last_c = this->values[length-1];   //value wich will be subsituted next iteration

        for(int i=this->length-1; i>= 0; i--){
            this->values[i] = c;

            c = last_c;
            if(i >= 1)
                last_c = this->values[i-1];
            else    
                last_c = this->values[this->length-1];
        }
    }

}

//return current frame
std::string Line::get_frame(){
    std::string frame = "";
        for(int i=0; i<this->length; i++)
            frame.push_back(this->values[i]);
        
        return frame;
}

//print frame for frame; which line (=line), time to sleep(=t)
void Line::print_animation(int line, int t){
    while(true){
        gotoxy(1, line);

        std::cout << this->get_frame() << std::endl;
        this->next();

        usleep(1000 * t);
    }
}


//set direction, in which line move
void Line::set_d_right(){
    this->direc_is_right = true;
}   

void Line::set_d_left(){
    this->direc_is_right = false;
}