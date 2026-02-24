#include <iostream>
using namespace std;


// OOP_L_7 - Operator Overloading
// 5 + 3i
class Complex {
    public:
    int real;
    int img; // imaginary

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }

    // if this exists, we can remove above add() function
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }
};

int main()
{
    // // + toplama
    // int a = 3 + 5;
    //
    // string name = "John";
    // string surname = " Smith";
    // string fullName = name + surname;
    // cout << fullName << endl;



    // OOP_L_7 - Operator Overloading
    Complex c1;
    c1.real = 5;
    c1.img = 3;
    cout << c1.real << " + i" << c1.img << endl;

    Complex c2;
    c2.real = 10;
    c2.img = 5;
    cout << c2.real << " + i" << c2.img << endl;

    Complex c3;
    // c3 = c1.add(c2);
    // c3 = c2.add(c1);
    c3 = c1 + c2;  // c1.add(c2);
    // c3 = c2 + c1; // c2.add(c1);

    // c3 = c1 - c2;

    cout << c3.real << " + i" << c3.img << endl;






    return 0;
}
