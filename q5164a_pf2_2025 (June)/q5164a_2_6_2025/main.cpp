#include <iostream>
using namespace std;

// google: programiz editor c++
int main()
{
    // // Getting 2 numbers from user and printing sum
    // cout << "Enter 2 numbers: ";
    // int a, b;
    // cin >> a >> b;
    // int c = a + b;
    // cout << "Sum of entered two numbers is " << c << std::endl;


    // // Getting name of user and printing it
    // std::cout << "What is your full name? ";
    //
    // std::string name;
    //
    // // // this method used only for getting till space
    // // std::cin >> name;
    //
    // // this is the method to take whole line including spaces between words
    // getline(std::cin, name);
    //
    // std::cout << "Hello, " << name << std::endl;


    // Operators and Expressions:
    // Arithmetic + - * / %
    // Relational < <= > >= == !=
    // Logical && || !
    // Bitwise & | ~ ^ << >>
    // Increment/Decrement ++ --
    // Assignment =


    // // Area of the triangle
    // float base, height, area;
    //
    // std::cout << "Please enter the base and hight of triangle: ";
    // std::cin >> base >> height;
    //
    // area = (base * height) / 2;
    //
    // std::cout << "Area is " << area << std::endl;

    // cout << "Hello World!" << endl;
    // cout << "Baku Engineering University!";


    // // // Enum
    // enum day {Mon = 1, Tue = 2, Wed, Thr, Fri, Sat, Sun};
    // day d = Sun;
    // if(d == Sun) { // or d == Sun
    //     std::cout << "It's Sunday" << std::endl;
    // }


    // // Typedef
    // typedef int qiymet;
    // qiymet t1, t2, t3;
    // t1 = 95;
    // std::cout << t1 << std::endl;
    //
    // typedef int tam_eded;
    // tam_eded a = 15;
    // cout << a;


    // // Short Circut (not checking second part based on condition)
    // int a=10, b=5, i = 1;
    // if(a < b && ++i < b) {
    // }
    // // if(a > b || ++i < b) {
    // // }
    // std::cout << i << std::endl;


    // int i = 5;
    //
    // cout << i << endl;
    // cout << ++i << endl;
    // cout << i << endl;


    // loops: while, do while, for, foreach
    // Arrays
    int a[5] = {1, 2, 3, 4, 5};

    for(int x : a) { // foreach loop. instead of int, we can write auto
        std::cout << x << std::endl;
    }




    return 0;
}
