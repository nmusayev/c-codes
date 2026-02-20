#include <iostream>
using namespace std;

int main()
{
    // // cout -> console out
    // cout << "Hello, BEU!"<< endl;
    // cout << "Hello, Adiniz!" << endl;
    //
    // cout << 5;


    // // Getting input from user
    // // include-un altina -> using namespace std;
    // cout << "Zəhmət olmasa, iki tam ədəd daxil edin: " << endl;
    // int a, b;
    // cin >> a >> b;
    // int sum = a + b;
    // cout << "Cəm: " << sum << endl;


    // cout << "Adınız nədir?" << endl;
    //
    // string name;
    //
    // // // cin -> boşluğa kimi oxuyur
    // // cin >> name;
    //
    // // getline() -> bütün sətri oxuyur, boşluq daxil
    // getline(cin, name);
    //
    // cout << "Salam, " << name << endl;


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
    // cout << "Enter a number: ";
    // std::cin >> n;
    //
    // sum = n * (n + 1) / 2;
    //
    // std::cout << sum << std::endl;


    // Typedef
    typedef int tam;

    // tam int keyword-unun sinonimi
    tam a;
    a = 5;
    int b = 15;

    cout << a << endl;


    // // Short Circut (not checking second part based on condition)
    // int a=10, b=5, i = 1;
    // // if(a < b && ++i > b) {
    // // }
    //
    // if(a > b || ++i < b) {
    // }
    // std::cout << i << std::endl;


    // // loops: while, do while, for, foreach
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int x : a) {
        cout << x << endl;
    }

    // for(int i = 0; i < 10; i++) {
    //     cout << a[i] << endl;
    // }



    return 0;
}
