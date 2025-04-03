#include <iostream>
using namespace std;

// // OOP_L_7 - Operator Overloading
// class Complex {
//     public:
//     int real;
//     int img; // imaginary
//
//     Complex add(Complex c) {
//         Complex temp;
//         temp.real = real + c.real;
//         temp.img = img + c.img;
//
//         return temp;
//     }
//
//     // if this exists, we can remove above add() function
//     Complex operator+(Complex c) {
//         Complex temp;
//         temp.real = real + c.real;
//         temp.img = img + c.img;
//
//         return temp;
//     }
// };



// // OOP_L_8 - Operator Overloading with Friend Function
// class Complex {
//     public:
//     int real;
//     int img;
//
//     friend Complex operator+(const Complex &c1, const Complex &c2);
// };
//
// // if "friend" used, function can access private values. mainly used for that
// Complex operator+(const Complex &c1, const Complex &c2) {
//     Complex temp;
//     temp.real = c1.real + c2.real;
//     temp.img = c1.img + c2.img;
//
//     return temp;
// }



// OOP_L_9 - Operator Overloading Insersion
class Complex {
    public:
    int real;
    int img;

    friend ostream & operator<<(ostream &out, Complex &c);
};

ostream & operator<<(ostream &out, Complex &c) {
    out << c.real << " + i" << c.img;
    return out;
}


int main()
{
    // // OOP_L_7 - Operator Overloading
    // Complex c1, c2, c3;
    // c1.real = 5;
    // c1.img = 3;
    //
    // c2.real = 10;
    // c2.img = 5;
    //
    // // c3 = c1.add(c2);
    // // c3 = c2.add(c1);
    // c3 = c1 + c2;
    //
    // cout << c3.real << " + i" << c3.img << endl;



    // // OOP_L_8 - Operator Overloading with Friend Function
    // Complex c1, c2, c3;
    // c1.real = 5;
    // c1.img = 3;
    //
    // c2.real = 10;
    // c2.img = 5;
    //
    // c3 = c1 + c2;
    //
    // cout << c3.real << " + i" << c3.img << endl;


    // OOP_L_9 - Operator Overloading. Insersion
    Complex c1;
    c1.real = 10;
    c1.img = 20;

    cout << c1 << " test word";


    return 0;
}
