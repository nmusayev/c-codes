#include <iostream>
using namespace std;

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
//         cout<<"Display of Derived " << a <<endl;
//     }
// };



// L2 - Virtual Functions
// Definition - A virtual function in C++ is a member function in a base class that
// you can override in a derived class. It enables runtime polymorphism,
// allowing the correct function to be called for an object,
// even if it is referenced through a base class pointer or reference.
class BasicCar {
    public:
    // void start() {
    virtual void start() {
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
    // // L1 - Override
    // Base base;
    // base.display();
    //
    // Derived derived;
    // derived.display();
    //
    // // on overload
    // derived.Base::display();
    // derived.display(5);


    // L2 - Virtual Functions
    // AdvanceCar advanceCar;
    // advanceCar.start();

    AdvanceCar advanceCar;
    BasicCar *p = &advanceCar;
    p->start();


    return 0;
}
