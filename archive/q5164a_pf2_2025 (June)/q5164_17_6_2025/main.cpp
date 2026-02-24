#include <iostream>
#include <fstream>
using namespace std;

// // L3 - Polymorphism
// class Car {
//     public:
//     // void start() {
//     virtual void start() {
//         cout << "Car Started" << endl;
//     }
// };
//
// class BMW : public Car {
//     public:
//     void start() {
//         cout << "BMW Started" << endl;
//     }
// };
//
// class Mercedes : public Car {
//     public:
//     void start() {
//         cout << "Mercedes Started" << endl;
//     }
// };



// // L4 - Abstract class
// class Base {
//     public:
//     virtual void fun1() = 0;
//     virtual void fun2() = 0;
// };
//
// class Derived : public Base {
//     public:
//     void fun1() {
//         cout << "fun1 from Derived" << endl;
//     }
//
//     void fun2() {
//         cout << "fun2 from Derived" << endl;
//     }
// };



// // L-1 Namespaces
// namespace First {
//     void fun() {
//         cout << "First" << endl;
//     }
// }
//
// namespace Second {
//     void fun() {
//         cout << "Second" << endl;
//     }
// }
//
// using namespace First;




int main()
{
    // // // L3 - Polymorphism
    // Car *p = new BMW();
    // p->start();
    //
    // p = new Mercedes();
    // p->start();




    // // Errors
    // // 1. Syntax Error (Compiler helps) (Programmer face problem)
    // // 2. Logical Error (Debugger helps) (Programmer face problem)
    // // 3. Runtime (User face problem) (Reasons: 1. bad input 2. problem with resources (internet, file)
    //
    // // Runtime errors is called Excpetions
    // // "I gave you perfect program, It will run except these conditions(bad input and prob. resources))"
    //
    // // Objective of exception handling:
    // // giving proper message to user, informing about problem and guidance to solve it
    //
    // int a = 10, c;
    //
    // // b -> user defined data. b comes from cin
    // int b = 2;
    //
    // try {
    //     // this also can be done from function by throwing inside and using function here
    //     if (b == 0) {
    //         throw 123; // in c++, we have to check error and throw. not thrown by default in c++ (java it's thrown automatically)
    //     }
    //     c = a / b;
    //     cout << c << endl;
    // } catch (int e) {
    //     cout << "Error code " << e << endl;
    //     if(e == 123) {
    //         cout << "Division by zero" << endl;
    //     }
    // }
    //
    //
    // // inner try/catch also possible
    // // multiple catch is also possible for different kind of throw types, last catch covers all the cases




    // // L-1 Namespaces
    // // Removes ambiguity
    // First::fun(); // if using keywork used above, no need to use First
    // Second::fun();



    // Week 10-12 (File Read&Write)
    // L3 - Streams (Writing to the file)
    // Stream is a flow of data (progra to external source or vice verca)
    // using mechanism of I/O
    // ios -> istream, ostream
    // for file -> ifstream, ofstream
    // cout and cin are also streams (pipes)
    // onlinegdb.com
    // #include <fstream>
    // using namespace std
    ofstream outfile("my.txt", ios::trunc); // fstream lib should be included
    // modes app - append, trunc - truncate. by default truncate ios:trunc taken

    outfile << "Hello" << endl;
    outfile << 25 << endl;

    // closing the stream. it is important. need to release the resource
    outfile.close();





    return 0;
}
