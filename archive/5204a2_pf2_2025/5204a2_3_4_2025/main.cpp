#include <iostream>
using namespace std;

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
//
//     void display() {
//         cout << x << " " << y << endl;
//     }
// };

// Inheritance-L2 Contractor calls
class Base {
    public:
    Base() {
        cout << "Default of Base" << endl;
    }

    Base(int x) {
        cout << "Param of Base " << x << endl;
    }
};


class Derived : public Base {
    public:
    Derived() {
        cout << "Default of Derived" << endl;
    }

    Derived(int y) {
        cout << "Param of Derived " << y << endl;
    }

    Derived(int x, int y): Base(x) {
        cout << "Param of Derived " << y << endl;
    }
};


int main()
{
    // // Inheritance-L1 Basics
    // Base a;
    // a.x = 15;
    // a.show();
    //
    // cout << "---------" << endl;
    //
    // Derived d;
    // d.x = 10;
    // d.y = 20;
    // d.show();
    // d.display();
    //
    //
    // // Example, Cube class extends Rectangle class


    // // Inheritance-L2 Contractor calls
    // Derived d1;
    // cout << "--------" << endl;
    //
    // Derived d2(5);
    // cout << "--------" << endl;
    //
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



    // Inheritance based on privacy
    // 1. publicly extended -> all as it is
    // 2. protectedly extended -> public + protected members become protected
    // 3. private extended ->> all become private

    // private vs protected => protectedly extended class can access members but object of the class cannot get members


    return 0;
}
