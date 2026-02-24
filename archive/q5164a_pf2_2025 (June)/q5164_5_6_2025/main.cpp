#include <iostream>
using namespace std;

// // L-FO - Functions Overloading
// int sum(int a, int b) {
//     return a + b;
// }
//
// int sum(int a, int b, int c) {
//     return a + b + c;
// }
//
// float sum(float a, float b) {
//     return a + b;
// }


// // L-FT - Function Template
// template <class T>
// T maxim (T a, T b) {
//     return (a > b) ? a : b;
// }


// // L-FDA - Function Default Arguments
// int sum(int a, int b, int c = 0) {
//     return a + b + c;
// }


// OOP_L_1 & OOP_L_2 && OOP_L_3
class Rectangle {
    public:
    int width;
    int length;

    int area() {
        return width * length;
    }

    int perimeter() {
        return 2 * (width + length);
    }
};


int main()
{
    // // String class, Copy and Find functions
    // string name = "Hello World";
    //
    // char word[100];
    //
    // name.copy(word, name.length());
    // word[name.length()] = '\0';
    // cout << word << endl;
    //
    //
    // int findIndex = name.find("el");
    // cout << findIndex << endl;
    //
    // int findIndex2 = name.find('l');
    // cout << findIndex2 << endl;
    //
    // int findIndex3 = name.rfind('l');
    // cout << findIndex3 << endl;
    //
    // int findIndex4 = name.find_first_of('l');
    // cout << findIndex4 << endl;
    //
    // int findIndex5 = name.find_last_of('l');
    // cout << findIndex5 << endl;
    //
    // string newName = name.substr(6, 5);
    // cout << newName << endl;
    //
    // int res = name.compare(newName); // negative -> first less, positive -> first greater, 0 -> both equal
    // cout << res << endl;


    // // String class, Other functions
    // string name = "Baku Engineering University";
    //
    // char letter = name.at(1);
    // cout << letter << endl;
    //
    // char alternativeWay = name[1]; // [] overloaded operator for string class
    // cout << alternativeWay << endl;
    //
    //
    // char firstLetter = name.front();
    // cout << firstLetter << endl;
    //
    // char lastLetter = name.back();
    // cout << lastLetter << endl;
    //
    //
    // string str1 = "Baku";
    // string str2 = " City";
    // string str3 = str1 + str2; // Operator overloading + (and also =)
    // cout << str3 << endl;
    //
    // string str4 = "Absheron";
    // string str5 = str4; // Operator overloading =


    // // String class. Iterator
    // string name = "Baku City";
    //
    // string::iterator it;
    // for (it = name.begin(); it != name.end(); it++) {
    //     cout << *it;
    // }
    //
    // cout << endl;
    //
    // for(int i = 0; name[i] != '\0'; i++) {
    //     cout << name[i];
    // }



    // // L-FO - Functions Overloading (call functions with the same name, but different number of arguments, or the same but different type of arguments) (related function is above main() function)
    // int a = 1, b = 2, c = 3;
    // cout << sum(a, b) << endl;
    // cout << sum(a, b, c) << endl;
    // cout << sum(2.7f, 3.1f) << endl;


    // // L-FT - Function Template (maxim() template function is above)
    // cout << maxim(3, 5) << endl;
    // cout << maxim(3.5, 5.5) << endl;
    // cout << maxim(2.1f, 3.7f) << endl;


    // // L-FDA - Function Default Arguments (related sum() function is above)
    // cout << sum(1, 3, 5) << endl;
    // cout << sum(1, 3) << endl;


    // Global variables -> stored in code section (not in stack or heap), declared outside of functions
    // Local variables -> stored in the stack section
    // Static variables used in fnc -> stored in code section (like global) but only seen to function itself


    // // Pointer to the function is also possible
    // int (*pf)(int, int);
    // fp = maxim;
    // (*pf)(10, 20);



    // Modular Programming vs Object-Oriented Programming Explanantion

    // Principles of Object-Oriented Programming
    // Program -> Data and Functions
    // 1. Abstraction - hiding internal implementation. only knowing function names in class should be enough not how it was implemented.
    // TV - only screen and controls. Car - only steering wheel, gas, break pedals
    // 2. Encapsulation (Data hiding) - for avoiding mishandling
    // making the data private -> hiding data. functions public
    // 3. Inheritance -> inheriting some functions or data. Car class main, BMW class, Mercedes class get (inherit) data from Car class
    // 4. Polymorphism -> If you know how to drive a car, you also know to drive bmw or mercedes but driving style (morphy) is different (poly-morphy)


    // Class vs Object
    // Class is a blueprint
    // Example house schema - blueprint. Object - houses that created based on that blueprint


    // OOP_L_1
    // Rectangle class example
    // 2 rectangle. 1st w=5, l=8; 2nd w=2 l=4;
    Rectangle r1, r2;

    r1.width = 5;
    r1.length = 8;
    cout << "Rectangle 1 area: " << r1.area() << endl;
    cout << "Rectangle 1 perimeter: " << r1.perimeter() << endl;

    r2.width = 2;
    r2.length = 4;
    cout << "Rectangle 2 area: " << r2.area() << endl;
    cout << "Rectangle 2 perimeter: " << r2.perimeter() << endl;



    return 0;
}
