#include <iostream>
using namespace std;

// Stack class only for int type
class Stack {
private:
    int *stk; // pointer to the array for storing elements
    int top; // top pointer
    int size; // size of the stack

public:
    Stack(int size) {
        this->size = size;
        top = -1;
        stk = new int[size];
    }

    void push(int x);
    int pop();
};
void Stack::push(int x) {
    if (top == size - 1) {
        cout << "Stack is Full" << endl;
    } else {
        top++;
        stk[top] = x;
    }
}

int Stack::pop() {
    int x = 0;
    if (top == -1) {
        cout << "Stack is Empty" << endl;
    } else {
        x = stk[top];
        top--;
    }
    return x;
}



// // Generalizing Stack class for all types
// template<class T>
// class Stack {
// private:
//     T *stk; // pointer to the array for storing elements
//     int top; // top pointer
//     int size; // size of the stack
//
// public:
//     Stack(int size) {
//         this->size = size;
//         top = -1;
//         stk = new T[size];
//     }
//
//     void push(T x);
//     T pop();
// };
//
// template<class T>
// void Stack<T>::push(T x) {
//     if (top == size - 1) {
//         cout << "Stack is Full" << endl;
//     } else {
//         top++;
//         stk[top] = x;
//     }
// }
//
// template<class T>
// T Stack<T>::pop() {
//     T x = 0;
//     if (top == -1) {
//         cout << "Stack is Empty" << endl;
//     } else {
//         x = stk[top];
//         top--;
//     }
//     return x;
// }



int main()
{
    // Stack class only for int type
    Stack s(3);
    s.push(2); // [2]
    s.push(3); // [2, 3]
    s.push(4); // [2, 3, 4]
    s.push(5); // "Stack is full"

    cout << s.pop() << endl; // 4, [2, 3]
    cout << s.pop() << endl; // 3, [2]
    cout << s.pop() << endl; // 2, []
    cout << s.pop() << endl; // "Stack is empty"


    // // Generalizing Stack class for all types
    // Stack<int> s1(3);
    // s1.push(2);
    // s1.push(3);
    // s1.push(4);
    // s1.push(5);
    //
    // cout << s1.pop() << endl;
    // cout << s1.pop() << endl;
    // cout << s1.pop() << endl;
    // cout << s1.pop() << endl;
    //
    // cout << "-----------------" << endl;
    //
    // Stack<double> s2(3);
    // s2.push(2.5);
    // s2.push(3.4);
    // s2.push(4.2);
    // s2.push(5.6);
    //
    // cout << s2.pop() << endl;
    // cout << s2.pop() << endl;
    // cout << s2.pop() << endl;
    // cout << s2.pop() << endl;


    return 0;
}
