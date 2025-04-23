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

    int userInput = 15;
    int a = 10, c;

    try {
        if(userInput == 0) {
            throw 2233;
        }
        if(userInput == 15) {
            throw 3344;
        }

        c = a / userInput;

        cout << c << endl;
    } catch(int e) {
        if(e == 2233) {
            cout << "0 daxil etmek olmaz!" << endl;
        }
        if(e == 3344) {
            cout << "15 daxil etmek olmaz!" << endl;
        }
    }

    // // inner try/catch also possible
    // // multiple catch is also possible for different kind of throw types, last catch covers all the cases



}
