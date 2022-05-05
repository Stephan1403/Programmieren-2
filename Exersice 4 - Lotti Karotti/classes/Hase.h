class Hase{
    public: 
        Hase(int feld);
        void move(int felder);
        void eliminate();

    private:
        int position;
        bool alive;
};