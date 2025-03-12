#include <iostream>
using namespace std;

// // OOP_L_2
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




// OOP_L_4
class Rectangle {
private:
    int width;
    int length;
public:
    int area() {
        return width * length;
    }
    int perimeter() {
        return 2 * (width + length);
    }

    int getLength() {
        return length;
    }

    int getWidth() {
        return width;
    }

    void setLength(int l) {
        if(l > 0) {
            length = l;
        } else {
            length = 0;
        }
    }

    void setWidth(int w) {
        if(w > 0) {
            width = w;
        } else {
            width = 0;
        }
    }
};

int main()
{
    // // OOP_L_2
    // // Pointer to the Object
    // Rectangle r; // created r object in the stack
    // Rectangle *ptr = &r; // created pointer in the stack to point to the object in the stack
    // r.length = 5;
    // ptr->length = 6;
    //
    // cout << ptr->length << endl;


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



    // Solution for above example (-5 setting)
    // OOP_L_4
    // making class properties private
    // but now, we cannot get and set value
    // solution: property functions. accessor (getProperty()) & mutator (setProperty())
    Rectangle r;

    r.setWidth(5); // r.width = 5;
    r.setLength(15); // r.length = 15;

    cout << "Duzb. eni: " << r.getWidth() << endl;
    cout << "Duzb. uzun: " << r.getLength() << endl;
    cout << "Duzb. sahesi: " << r.area() << endl;



    Rectangle r2;
    r2.setWidth(-5);
    r2.setLength(15);


    cout << "Duzb. r2 eni: " << r2.getWidth() << endl;
    cout << "Duzb. r2 uzun: " << r2.getLength() << endl;
    cout << "Duzb. r2 sahesi: " << r2.area() << endl;
    cout << "Duzb. r2 perimeter: " << r2.perimeter() << endl;




    return 0;
}
