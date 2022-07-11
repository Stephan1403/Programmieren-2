#include <iostream>

class Vector_2d{
    public:
        Vector_2d(int x, int y){
            values[0]=x;
            *(values+1) = y;
        }

        void print_vec(){
            std::cout << "(" << this->values[0] << ", " << this->values[1] << ")" << std::endl;
        }

        // Multiplication
        int operator* (const Vector_2d& v){
            int res = (this->values[0]) * (v.values[0]) + (this->values[1]) * (v.values[1]);
            return res;
        }

        // Addition

        /*
        Vector_2d operator+ (const Vector_2d& a){
            Vector_2d res_vec(0,0);
            res_vec.values[0] = this->values[0] + a.values[0];
            res_vec.values[1] = this->values[1] + a.values[1];

            return res_vec;
        }
        */

        friend std::ostream& operator<< (std::ostream& stream, const Vector_2d& vec){
            stream << "(" << vec.values[0] << ", " << vec.values[1] << ")" << std::endl;
            return stream;
        }

        /*
        void operator++(int){
            this->values[0]++;
            this->values[1]++;
        }
        */

       /*
        void operator += (const Vector_2d& a){
            this->values[0] = this->values[0] + a.values[0];
            this->values[1] = this->values[1] + a.values[1];

        }
        */


        friend Vector_2d operator+ (const Vector_2d& a, const Vector_2d& b);
        friend Vector_2d operator++ (const Vector_2d&a , int);
        friend void operator+= (Vector_2d& a, const Vector_2d& b);

    private:
        int values[2];
};


Vector_2d operator+ (const Vector_2d& a, const Vector_2d& b){
    Vector_2d c(0, 0);
    c.values[0] = b.values[0] + a.values[0];
    c.values[1] = b.values[1] + a.values[1];

    return c;
}




Vector_2d operator++ (const Vector_2d& a, int){
    Vector_2d b(0, 0);
    b.values[0]++;
    b.values[1]++;
    return b;
}


void operator+= (Vector_2d& a, const Vector_2d& b){
    a.values[0] = a.values[0] + b.values[0];
    a.values[1] = a.values[1] + b.values[1];
}



int main(){
    Vector_2d a(2, 4);
    Vector_2d b(3, 1);

    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;

    a+=b;

    std::cout << "a= " << a << std::endl;



}