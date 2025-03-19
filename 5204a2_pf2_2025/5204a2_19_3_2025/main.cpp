#include <iostream>
using namespace std;


// OOP_L_7 - Operator Overloading
// 3i + 5
// 4i + 2
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
    // int abc = 3 + 5;
    //
    // string name = "Ali";
    // string surname = "Abbasov";
    //
    // string full_name = name + surname;
    // cout << full_name << endl;




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
    // c3 = c1.add(c1);

    // c3 = c1 + c2;  // c1.add(c2)
    c3 = c2 + c1;  // c2.add(c1)

    cout << c3.real << " + i" << c3.img << endl;




    // c3 = c2.add(c1);


    return 0;
}

