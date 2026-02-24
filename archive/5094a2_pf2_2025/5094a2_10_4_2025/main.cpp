#include <iostream>
class Your;
using namespace std;

// // L3 - Polymorphism
// class Car {
//     public:
//     // void start() {
//     virtual void start() {
//         cout << "Car Started" << endl;
//     }
// };
// class BMW : public Car {
//     public:
//     void start() {
//         cout << "BMW Started" << endl;
//     }
// };
// class Mercedes : public Car {
//     public:
//     void start() {
//         cout << "Mercedes Started" << endl;
//     }
// };


// // L4 - Abstract class
// class Base {
// public:
//     virtual void fun1() = 0;
//     virtual void fun2() = 0;
// };
//
// class Derived : public Base {
// public:
//     void fun1() {
//         cout << "fun1 from Derived" << endl;
//     }
//
//     void fun2() {
//         cout << "fun2 from Derived" << endl;
//     }
// };


// // Example Classes about abstraction
// class Animal {
// public:
//     virtual void makeSound() = 0;
// };
//
// class Dog : public Animal {
//     void makeSound() {
//         cout << "haw-haw-haw" << endl;
//     }
// };
//
// class Cat : public Animal {
//     void makeSound() {
//         cout << "meow-meow-meow" << endl;
//     }
// };



// // L-1 Friend Functions
// class Test {
//     private:
//         int a;
//     protected:
//         int b;
//     public:
//         int c;
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


// // L-1 Friend Functions
// class Test {
//     private:
//         int a;
//     protected:
//         int b;
//     public:
//         int c;
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



// L-2 Friend Classes
class My {
    private:
        int a;

    friend Your;
};

class Your {
public:
    My m;

    void fun() {
        m.a = 10;
        cout << m.a << endl;
    }

};



int main()
{
    // // // L3 - Polymorphism
    // Car *p = new BMW();
    // p->start();
    //
    // p = new Mercedes();
    // p->start();



    // // L4 - Abstract class
    // // Əsasən digər siniflərə şablon işini görür ve polymorphism istifade etemk ucunde istifade edilir
    // // pure virtual function - function in class without body and equal to 0 (means needs to be implemented on inherited class)
    // // class with pure virtual function is abstract class
    // // it is not possible to create object for abstract class
    // // You can create pointer for abstract class
    //
    // // 3 type of classes:
    // // 1. All concrete function - purpose - reusability
    // // 2. Some concrete and some pure virtual func - abstract class - purpose - reusability & polymorphism
    // // 3. All pure virtual function - interface - abstract class - purpose - polymorphism
    // // Base b; // not possible to crete object of base, becuase it's abstract
    // Base *p = new Derived();
    // p->fun1();
    // p->fun2();
    //
    // // // also
    // // Derived d;
    // // d.fun1();
    // // d.fun2();
    //
    // // // Exercise: Shape abstract class (with area and perimeter virtual funcitons) for Rectangle and Circle.
    // // Another Example: Animal class (with abstract makeSound() function), Dog and Cat class extend and implement that method.


    // // Example Classes about abstraction
    // Animal *p2 = new Dog();
    // p2->makeSound();
    //
    // p2 = new Cat();
    // p2->makeSound();



    // // L-1 Friend Functions
    // // If we use to get class private and protected members in the function
    // // which is outside the class, we need to make that function friend
    // // function inside class with "friend" keyword
    // fun();


    // L-2 Friend Classes
    // If we want to get private, protected members of another class
    // inside our class, we need to make our class friend in the
    // accessing class
    Your y;
    y.fun();



    return 0;
}
