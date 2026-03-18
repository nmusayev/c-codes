#include <iostream>
using namespace std;

// // OOP_L_1 & OOP_L_2 && OOP_L_3
// class Rectangle {
//     public:
//     int width;
//     int length;
//
//     int area() {
//         return width * length;
//     }
//
//     int perimeter() {
//         return 2 * (width + length);
//     }
// };


// // OOP_L_4
// class Rectangle {
// private:
//     int width;
//     int length;
//
// public:
//     int area() {
//         return width * length;
//     }
//
//     int perimeter() {
//         return 2 * (width + length);
//     }
//
//     int getLength() {
//         return length;
//     }
//
//     int getWidth() {
//         return width;
//     }
//
//     void setLength(int l) {
//         if(l > 0) {
//             length = l;
//         } else {
//             length = 0;
//         }
//     }
//
//     void setWidth(int w) {
//         if(w > 0) {
//             width = w;
//         } else {
//             width = 0;
//         }
//     }
// };


// // OOP_L_5 Constructors
// class Rectangle {
// private:
//     int width;
//     int length;
//
// public:
//     // Rectangle() {
//     //     width = 1;
//     //     length = 1;
//     // }
//
//     Rectangle(int l = 1, int w = 1) {
//         setLength(l);
//         setWidth(w);
//     }
//
//     Rectangle(Rectangle &r) {
//         setLength(r.length);
//         setWidth(r.width);
//
//         // // because referenced r class is type of Rectangle also,
//         // // their properties can be accessed here even though they are private
//         // setLength(r.length);
//         // setWidth(r.width);
//     }
//
//     int area() {
//         return width * length;
//     }
//
//     int perimeter() {
//         return 2 * (width + length);
//     }
//
//     int getLength() {
//         return length;
//     }
//
//     int getWidth() {
//         return width;
//     }
//
//     void setLength(int l) {
//         if(l > 0) {
//             length = l;
//         } else {
//             length = 0;
//         }
//     }
//
//     void setWidth(int w) {
//         if(w > 0) {
//             width = w;
//         } else {
//             width = 0;
//         }
//     }
// };


// OOP_L_6 - Scope Resolution Operator
class Rectangle {
private:
    int width;
    int length;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Inline function. will be replaced wherever called. No need to write inline, by default is inline
    int area() {
        return width * length;
    }

    int perimeter(); // only if "inline" keywork written before "int perimeter()", this will become inline function
};

// will not be inside main function even if called from main. will be referred in each call
int Rectangle::perimeter() {
    return 2 * (length + width);
}



int main()
{
    // // OOP_L_1
    // // Rectangle class example
    // // 2 rectangle. 1st w=5, l=8; 2nd w=2 l=4;
    // Rectangle r1;
    //
    // r1.width = 5;
    // r1.length = 8;
    // cout << "Rectangle 1 area: " << r1.area() << endl;
    // cout << "Rectangle 1 perimeter: " << r1.perimeter() << endl;


    // // OOP_L_2
    // // Pointer to the Object
    // Rectangle r; // created r object in the stack
    // Rectangle *ptr = &r; // created pointer in the stack to point to the object in the stack
    // r.length = 5;
    // ptr->length = 6;
    //
    // cout << ptr->length << endl;
    // cout << r.length << endl;
    //
    //
    // //v2, creating object in the heap
    // Rectangle *ptr2 = new Rectangle(); // ptr2 created in stack, but pointing to the object which is created in Heap
    // ptr2->length = 3;
    // cout << ptr2->length << endl;
    //
    // // Info: in Java all object is created in Heap with "new" keyword, but in C++ programmer decide to create in stack or heap


    // // Data Hiding, OOP_L_3
    // // Accessing data as public and modifying can be mishandled
    // Rectangle r;
    // r.length = 10;
    // r.width = -5;
    //
    // cout << r.area() << endl;


    // // Solution for above example (-5 setting)
    // // OOP_L_4
    // // making class properties private
    // // but now, we cannot get and set value
    // // solution: property functions. accessor (getProperty()) & mutator (setProperty())
    // Rectangle r;
    // r.setLength (10);
    // r.setWidth(-5);
    // cout << r.area() << endl;
    // cout << r.perimeter() << endl;



    // // OOP_L_5 Constructors
    // // 1. Default  2. Non-Parameterized  3. Parameterized  4. Copy (also consider deep copy)
    // Rectangle r1;
    // cout << r1.area() << endl;
    //
    // Rectangle r2(5, 3);
    // cout << r2.area() << endl;
    //
    // Rectangle r3(r2);
    // cout << r3.area() << endl;



    // OOP_L_6
    // Scope Resolution Operator
    // Why we need it (using to be referred in each call, not replaced as native functions)
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;






    return 0;
}
