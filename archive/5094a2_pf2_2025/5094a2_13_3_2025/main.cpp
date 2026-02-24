#include <iostream>
using namespace std;


// // OOP_L_5 Constructors
// class Rectangle {
// private:
//     int width;  // -3247239847
//     int length; // 21434234
//
// public:
//     // default
//     // Rectangle() {}
//
//     // Rectangle() {
//     //     cout << "in object creation process" << endl;
//     //     width = 1;
//     //     length = 1;
//     //     cout << "object created" << endl;
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
public:
    int width;
    int length;

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
    // // OOP_L_5 Constructors
    // // 1. Default  2. Non-Parameterized  3. Parameterized  4. Copy (also consider deep copy)
    // Rectangle r1;
    // cout <<  "r1 area: " << r1.area() << endl;
    //
    // Rectangle r2(15, 5);
    // cout << "r2 area: " << r2.area() << endl;
    //
    // Rectangle r3(r2);
    // cout << "r3 length: " << r3.getLength() << endl;
    // cout << "r3 width: " << r3.getWidth() << endl;



    // OOP_L_6
    // Scope Resolution Operator
    // Why we need it
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;


    return 0;
}
