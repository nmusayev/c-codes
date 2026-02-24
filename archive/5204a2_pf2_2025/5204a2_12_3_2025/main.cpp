#include <iostream>
using namespace std;

// // OOP_L_3
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
    int width, length;
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
    r.setWidth(10);
    r.setLength(20);

    cout << "width getter of r " << r.getLength() << endl;

    cout << "when 10w : 20h: " << r.area() << endl;


    Rectangle r2;
    r2.setWidth(10);
    r2.setLength(-20);

    cout << "when 10w : -20h: " << r2.area() << endl;

    return 0;
}
