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



        friend Vector_2d operator+ (const Vector_2d& a, const Vector_2d& b);

    private:
        int values[2];
};


Vector_2d operator+ (const Vector_2d& a, const Vector_2d& b){
    Vector_2d c(0, 0);
    c.values[0] = b.values[0] + a.values[0];
    c.values[1] = b.values[1] + a.values[1];

    return c;

}




int main(){
    Vector_2d a(1, 0);
    Vector_2d b(0, 1);

    std::cout << a << std::endl;

    std::cout << "Scalar a and b: " << a*b << std::endl;

    printf("\n");

    Vector_2d c = a + b;
    
    
    std::cout << c << std::endl;


}