#include <iostream>
using namespace std;

int main()
{
    // Errors
    // 1. Syntax Error (Compiler helps) (Programmer face problem)
    // 2. Logical Error (Debugger helps) (Programmer face problem)
    // 3. Runtime (User face problem) (Reasons: 1. bad input 2. problem with resources (internet, file)

    // Runtime errors is called Excpetions
    // "I gave you perfect program, It will run except these conditions(bad input and prob. resources))"

    // Objective of exception handling:
    // giving proper message to user, informing about problem and guidance to solve it

    int a = 10, b = 15, c;
    try {
        // this also can be done from function by throwing inside and using function here
        if (b == 0) {
            throw 2233; // in c++, we have to check error and throw. not thrown by default in c++ (java it's thrown automatically)
        }
        if(b == 15) {
            throw 4455;
        }
        c = a / b;
        cout << c << endl;
    } catch (int e) {
        if(e == 2233) {
            cout << "0-e bolmek olmaz" << endl;
        }
        if(e == 4455) {
            cout << "15-e bolmek olmaz" << endl;
        }
    }


    // inner try/catch also possible
    // multiple catch is also possible for different kind of throw types, last catch covers all the cases



}
