#include <stdio.h>
#include <string>

//a line of either text or stars and whitspaces
class Line{

    public:
        Line(int l, bool direc_is_right=true){
            this->length = l;
            this->direc_is_right = direc_is_right;

            values = new char[l];
        }


        //get frame
        std::string get_frame(){
            std::string frame = "";
            for(int i=0; i<this->length; i++)
                frame.push_back(this->values[i]);
            

            return frame;
        }


        //set all stars and white spaces
        void set_stars(){

            for(int i=0; i<this->length; i++){
                //iterate through array
                if(i%3 == 0)
                    this->values[i] = '*';
                else
                    this->values[i] = ' ';
            }
        }


        //next frame
        void next(){
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


        //set dirrection
        void set_d_right(){
            this->direc_is_right = true;
        }

        void set_d_left(){
            this->direc_is_right = false;
        }


    private:
        int length;
        bool direc_is_right;

        char* values;
};