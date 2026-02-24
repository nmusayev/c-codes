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
    //
    // cout << "en: " << r1.width << endl;
    // cout << "uzunluq: " << r1.length << endl;
    // cout << "Rectangle 1 area: " << r1.area() << endl;
    // cout << "Rectangle 1 perimeter: " << r1.perimeter() << endl;
    //
    //
    //
    // Rectangle r2;
    // r2.width = 10;
    // r2.length = 20;
    //
    // cout << "en: " << r2.width << endl;
    // cout << "uzunluq: " << r2.length << endl;
    // cout << "Rectangle 1 area: " << r2.area() << endl;
    // cout << "Rectangle 1 perimeter: " << r2.perimeter() << endl;



    // // OOP_L_2
    // // Pointer to the Object
    // Rectangle r; // created r object in the stack
    // Rectangle *ptr = &r; // created pointer in the stack to point to the object in the stack
    // r.length = 5;
    // ptr->length = 6;
    //
    // cout << ptr->length << endl;
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
    // r.setLength (10); // length 10
    // r.setWidth(-5); // width 0
    // cout << r.area() << endl; // area: 0
    // cout << r.perimeter() << endl; // perimeter: 20



    // OOP_L_5 Constructors
    // 1. Default  2. Non-Parameterized  3. Parameterized  4. Copy (also consider deep copy)
    // Rectangle r1;
    // cout << "en: " << r1.getWidth() << endl;
    // cout << "uzunluq: " << r1.getLength() << endl;
    // cout << r1.area() << endl;

    // Rectangle r2(5, 3);
    // cout << r2.area() << endl;

    // Rectangle r3(r2);
    // cout << r3.area() << endl;


    // OOP_L_6
    // Scope Resolution Operator
    // Why we need it (using to be referred in each call, not replaced as native functions)
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;



    // This Pointer inside constructor for the same name params as props


    // Struct vs Class (Basicly the same style in C++) (keyworkds "struct", "class")
    // 1. in C struct can only have data, but in C++ it can also have functions
    // 2. By default, data and function is public in struct, but in class by default they are private, need to define public
    // Struct: Often used for plain data structures with minimal behavior, resembling C-style structs.
    // Class: Used for object-oriented programming, encapsulating data and behavior.


    return 0;
}
