#include <iostream>

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
    // Modular Programming vs Object-Oriented Programming Explanantion

    // Principles of Object-Oriented Programming
    // Program -> Data and Functions
    // 1. Abstraction - (Mucerredleshdirme) - hiding internal implementation. only knowing function names in class should be enough not how it was implemented.
    // TV - only screen and controls. Car - only steering wheel, gas, break pedals
    // 2. Encapsulation (Data hiding) (Melumating gizledilmesi) - for avoiding mishandling
    // making the data private -> hiding data. functions public
    // 3. Inheritance (Miras) -> inheriting some functions or data. Car class main, BMW class, Mercedes class get (inherit) data from Car class
    // 4. Polymorphism (Cox-forma) -> If you know how to drive a car, you also know to drive bmw or mercedes but driving style (morphy) is different (poly-morphy)



    // OOP_L_1
    // Rectangle class example
    // 2 rectangle. 1st w=5, l=8; 2nd w=2 l=4;
    Rectangle r1;

    r1.width = 10;
    r1.length = 20;

    std::cout << "r1 en: " << r1.width << std::endl;
    std::cout << "r1 uzunlug: " << r1.length << std::endl;
    std::cout << "r1 sahesi: " << r1.area() << std::endl;
    std::cout << "r1 perimeter: " << r1.perimeter() << std::endl;


    Rectangle r2;
    r2.width = 5;
    r2.length = 15;

    std::cout << "r2 en: " << r2.width << std::endl;
    std::cout << "r2 uzunlug: " << r2.length << std::endl;
    std::cout << "r2 sahesi: " << r2.area() << std::endl;
    std::cout << "r2 perimeter: " << r2.perimeter() << std::endl;



    // OOP_L_2
    // Pointer to the Object
    Rectangle r; // created r object in the stack
    Rectangle *ptr = &r; // created pointer in the stack to point to the object in the stack
    r.length = 5;
    ptr->length = 6;

    std::cout << "r uzunluq: " << ptr->length << std::endl;
    std::cout << "r uzunluq: " << r.length << std::endl;


    //v2, creating object in the heap
    Rectangle *ptr2 = new Rectangle(); // ptr2 created in stack, but pointing to the object which is created in Heap
    ptr2->length = 3;
    std::cout << "Heap-deki rectangle obyektinin uzunlugu: " << ptr2->length << std::endl;

    // Info: in Java all object is created in Heap with "new" keyword, but in C++ programmer decide to create in stack or heap



    return 0;
}
