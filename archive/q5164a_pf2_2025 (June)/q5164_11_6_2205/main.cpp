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



// // OOP_L_9 - Operator Overloading Insersion
// class Complex {
//     public:
//     int real;
//     int img;
//
//     friend ostream & operator<<(ostream &out, Complex &c);
// };
//
// ostream & operator<<(ostream &out, Complex &c) {
//     out << c.real << " + i" << c.img;
//
//     return out;
// }



// // Inheritance-L1
// class Base {
// public:
//     int x;
//
//     void show() {
//         cout << x << endl;
//     }
// };
//
// class Derived : public Base {
//     public:
//     int y;
//     void display() {
//         cout << x << " " << y << endl;
//     }
// };



// // Inheritance-L2 Contractor calls
// class Base {
//     public:
//     Base() {
//         cout << "Default of Base" << endl;
//     }
//
//     Base(int x) {
//         cout << "Param of Base " << x << endl;
//     }
// };
//
//
// class Derived : public Base {
//     public:
//     Derived() {
//         cout << "Default of Derived" << endl;
//     }
//
//     Derived(int y) {
//         cout << "Param of Derived " << y << endl;
//     }
//
//     Derived(int x, int y): Base(x) {
//         cout << "Param of Derived " << y << endl;
//     }
// };



// // L1 - Override
// class Base {
//     public:
//     void display() {
//         cout<<"Display of Base"<<endl;
//     }
// };
//
// class Derived : public Base {
// public:
//     void display() {
//         cout<<"Display of Derived"<<endl;
//     }
//
//     // overload
//     void display(int a) {
//         cout<<"Display of Derived"<<endl;
//     }
// };



// L2 - Virtual Functions
// Definition - A virtual function in C++ is a member function in a base class that
// you can override in a derived class. It enables runtime polymorphism,
// allowing the correct function to be called for an object,
// even if it is referenced through a base class pointer or reference.
class BasicCar {
    public:
    void start() {
    // virtual void start() {
        cout<<"BasicCar started"<<endl;
    }
};

class AdvanceCar : public BasicCar {
public:
    void start() {
        cout<<"AdvanceCar started"<<endl;
    }
};






int main()
{
    // L2 - Virtual Functions
    // AdvanceCar advanceCar;
    // advanceCar.start();

    AdvanceCar advanceCar;
    BasicCar *p = &advanceCar;
    p->start();




    // // L1 - Override
    // Base base;
    // base.display();
    //
    // Derived derived;
    // derived.display();

    // // on overload
    // derived.Base::display();
    // derived.display(5);


    // Inheritance-L2 Contractor calls
    // Derived d1;
    // cout << "--------" << endl;

    // Derived d2(5);
    // cout << "--------" << endl;

    // Derived d3(3, 5);
    // cout << "--------" << endl;



    // isA, hasA relation
    // class has private, protected and public members
    // 1. When using object (hasA) only public members are accessable
    // 2. When extending class (isA) public and protected members are accessable.
    // Private members are there but not accessable, need public setters and getters



    // Types of inheritance
    // 1. B -> A single / simple
    // 2. B -> A && C -> A && D -> A  Hierarchical [iyerarxik]
    // 3. C -> B && B -> A Multilevel
    // 4. C -> A && C -> B Multiple (Not allowed in Java)


    // // Inheritance-L1 Basics
    // Base a;
    // a.x = 15;
    // a.show();
    //
    // Derived d;
    // d.x = 10;
    // d.y = 20;
    // d.show();
    // d.display();
    //
    // // Example, Cube class extends Rectangle class




    // // OOP_L_7 - Operator Overloading
    // Complex c1, c2, c3;
    // c1.real = 5;
    // c1.img = 3;
    //
    // c2.real = 10;
    // c2.img = 5;
    //
    // // c3 = c1.add(c2);
    // c3 = c1 + c2;
    //
    // cout << c3.real << " + i" << c3.img << endl;
    //
    //
    //
    // // c3 = c2.add(c1);
    // // c3 = c1 + c2;
    //
    // // cout << c3.real << " + i" << c3.img << endl;




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



    // // OOP_L_9 - Operator Overloading. Insersion
    // Complex c1;
    // c1.real = 10;
    // c1.img = 20;
    //
    // cout << c1;



    return 0;
}
