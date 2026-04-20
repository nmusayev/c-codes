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
//         cout<<"Display of Derived: " << a <<endl;
//     }
// };


// // L2 - Virtual Functions
// // Definition - A virtual function in C++ is a member function in a base class that
// // you can override in a derived class. It enables runtime polymorphism,
// // allowing the correct function to be called for an object,
// // even if it is referenced through a base class pointer or reference.
// class BasicCar {
// public:
//     // void start() {
//         virtual void start() {
//         cout<<"BasicCar started"<<endl;
//     }
// };
//
// class AdvanceCar : public BasicCar {
// public:
//     void start() {
//         cout<<"AdvanceCar started"<<endl;
//     }
// };



// // L3 - Polymorphism
// class Car {
//     public:
//     // void start() {
//     virtual void start() {
//         cout << "Car Started" << endl;
//     }
// };
//
// class BMW : public Car {
//     public:
//     void start() {
//         cout << "BMW Started" << endl;
//     }
// };
//
// class Mercedes : public Car {
//     public:
//     void start() {
//         cout << "Mercedes Started" << endl;
//     }
// };


// // L4 - Abstract class
// class Base {
//     public:
//     virtual void fun1() = 0;
//     virtual void fun2() = 0;
// };
//
// class Derived : public Base {
//     public:
//     void fun1() {
//         cout << "fun1 from Derived" << endl;
//     }
//
//     void fun2() {
//         cout << "fun2 from Derived" << endl;
//     }
// };



// // L-1 Friend Functions
// class Test {
// private:
//     int a;
// protected:
//     int b;
// public:
//     int c;
//
//     // does not belong to class, but friend to the class
//     // (can access all private, protected, public members)
//     friend void fun();
// };
//
// void fun() {
//     Test t;
//     t.a = 15;
//     t.b = 18;
//     t.c = 20;
//
//     cout << t.a << " " << t.b << " " << t.c << endl;
// }


int main()
{
    // // L1 - Override
    // // Base base;
    // // base.display();
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

    // AdvanceCar advanceCar;
    // BasicCar *p = &advanceCar;
    // p->start();



    // // // L3 - Polymorphism
    // Car *p = new BMW();
    // p->start();
    //
    // p = new Mercedes();
    // p->start();



    // L4 - Abstract class
    // Əsasən digər siniflərə şablon işini görür ve polymorphism istifade etemk ucunde istifade edilir
    // pure virtual function - function in class without body and equal to 0 (means needs to be implemented on inherited class)
    // class with pure virtual function is abstract class
    // it is not possible to create object for abstract class
    // You can create pointer for abstract class

    // // 3 type of classes:
    // // 1. All concrete function - purpose - reusability
    // // 2. Some concrete and some pure virtual func - abstract class - purpose - reusability & polymorphism
    // // 3. All pure virtual function - interface - abstract class - purpose - polymorphism
    // // Base b; // not possible to crete object of base, becuase it's abstract
    // Base *p = new Derived();
    // p->fun1();
    // p->fun2();



    return 0;
}
