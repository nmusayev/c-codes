#include <iostream>
using namespace std;

// OOP_L_5 Constructors
class Rectangle {
private:
    int width;  // garbage value: -1234987234
    int length; // garbage value: 987343

public:
    // // default constructor
    // Rectangle() {}

    // Konstructor
    // Rectangle() {
    //     length = 1;
    //     width = 1;
    // }

    Rectangle(int l = 1, int w = 1) {
        cout << "Contructor started" << endl;
        setLength(l);
        cout << "Uzunlug teyin edildi " << l << endl;
        setWidth(w);
        cout << "En teyin edildi " << w << endl;
        cout << "Contructor ended" << endl;
    }

    Rectangle(Rectangle &q) {
        setLength(q.length);
        setWidth(q.width);

        // // because referenced r class is type of Rectangle also,
        // // their properties can be accessed here even though they are private
    }

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
    // OOP_L_5 Constructors
    // 1. Default  2. Non-Parameterized  3. Parameterized  4. Copy (also consider deep copy)
    Rectangle r1;
    cout << "r1 eni: " << r1.getWidth() << endl;
    cout << "r1 uzunlug: " << r1.getLength() << endl;
    cout << "r1 sahe: " << r1.area() << endl;

    Rectangle r2(15, 5);
    cout << "r2 eni: " << r2.getWidth() << endl;
    cout << "r2 uzunlug: " << r2.getLength() << endl;
    cout << "r2 sahe: " << r2.area() << endl;


    Rectangle r3(r2);
    cout << "r3 eni: " << r3.getWidth() << endl;
    cout << "r3 uzunlug: " << r3.getLength() << endl;

    return 0;
}
