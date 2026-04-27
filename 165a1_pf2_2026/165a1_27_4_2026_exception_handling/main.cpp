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

    int a = 10, c;
    // b -> user defined data. b comes from cin
    int b = 0;

    try {
        // this also can be done from function by throwing inside and using function here
        if (b == 0) {
            throw 1; // in c++, we have to check error and throw. not thrown by default in c++ (java it's thrown automatically)
        }
        c = a / b;
        cout << c << endl;
    } catch (int e) {
        if(e == 1) {
            cout << "0-a bolmek olmaz" << endl;
            cout << "Error code " << e << endl;
        }
    }


    // inner try/catch also possible
    // multiple catch is also possible for different kind of throw types, last catch covers all the cases

    return 0;
}
