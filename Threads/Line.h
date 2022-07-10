class Line{

    public:
        Line(int l, std::string text="", bool direc_is_right=true);

        void set_stars();                           //turn line into star-line
        void set_word(std::string word);            //turn line into word-line and set word

        void next();                                //set next frame
        std::string get_frame();                    //returns the current state
        void print_animation(int line, int t=50);   //print frame for frame as a animation

        void set_d_right();                         //animation direction right
        void set_d_left();                          //animation direction left

    
    private:
        int length;
        bool direc_is_right;

        char* values;

};