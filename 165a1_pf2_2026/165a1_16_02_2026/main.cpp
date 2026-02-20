#include <iostream>
using namespace std;

int main()
{
    // // console out
    // std::cout << "Hello, World!" << std::endl;
    // std::cout << 5;///


    // // Sum of two number from console
    // std::cout << "İki ədəd daxil edin: ";
    //
    // int a, b;
    //
    // std::cin >> a >> b;
    //
    // int c = a + b;
    //
    // std::cout << "Ədədlərin cəmi: " << c << std::endl;



    // std::cout << "Adınız nədir?" << std::endl;
    // std::string name;
    //
    // // std::cin >> name;
    //
    // // this is the method to take whole line including spaces between words
    // getline(std::cin, name);
    //
    // std::cout << "Salam, " << name << std::endl;


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



    // // Finding sum of first n natural numbers
    // int n, sum;
    //
    // std::cin >> n;
    //
    // sum = n * (n + 1) / 2;
    //
    // std::cout << sum << std::endl;



    // // Typedef
    // int a = 5;
    // std::cout << a << std::endl;
    //
    // typedef int tam;
    // tam x = 10;
    // std::cout << x << std::endl;


    // // Short Circut (not checking second part based on condition)
    // int a=10, b=5, i = 1;
    // // if(a < b && ++i > b) {
    // // }
    // if(a < b || ++i < b) {
    // }
    // std::cout << i << std::endl;


    // // loops: while, do while, for, foreach
    // // Arrays
    // int a[5] = {1, 2, 3, 4, 5};
    //
    // for(int x : a) { // foreach loop. instead of int, we can write auto
    //     std::cout << x << std::endl;
    // }


    // Pointers
    int a = 10;
    int *ptr = &a;

    cout << "a-nın dəyəri: " << a << endl;
    cout << "a-nın ünvanı: " << &a << endl;

    cout << "ptr-ın dəyəri " << ptr << endl;
    cout << "ptr-ın unvani " << &ptr << endl;
    cout << "ptr-in saxladığı ünvandakı dəyər " << *ptr << endl;





    return 0;
}
