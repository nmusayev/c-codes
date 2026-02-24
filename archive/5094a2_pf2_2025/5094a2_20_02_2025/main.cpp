#include <iostream>

int main()
{
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


    // Task based classwork
    // Istifadeciden n ededini goturun
    // ve 2 mislini ekrana print edin
    // istifade edilecek: cin ve cout


    // // // Enum
    // enum day {Mon = 1, Tue, Wed, Thr, Fri, Sat, Sun};
    // day d = Sun;
    // if(d == 7) { // or d == Sun
    //     std::cout << "It's Sunday" << std::endl;
    // }
    // if(d == Sun) { // or d == Sun
    //     std::cout << "It's Sunday" << std::endl;
    // }
    //
    // int a = 5;



    // // Typedef
    // typedef int tam_eded;
    // tam_eded t1, t2, t3;
    // t1 = 95;
    // std::cout << t1 << std::endl;
    //
    // int a = 5;
    // tam_eded f = 3;


    // // Short Circut (not checking second part based on condition)
    // int a=10, b=5, i = 1;
    // if(a > b && ++i < b) {
    // }
    // if(a > b || ++i < b) {
    // }
    // std::cout << i << std::endl;


    // // loops: while, do while, for, foreach
    // // Arrays
    // int a[] = {1, 2, 3, 4, 5};
    //
    // for(int x : a) { // foreach loop. instead of int, we can write auto
    //     std::cout << x << std::endl;
    // }


    // Searches: Linear, Binary (needs sorted array for binary search)
    // Linear Search - {7, 2, 3, 6, 5, 1}
    // Binary Search - {1, 2, 3, 5, 6, 7}


    // Gostericiler
    // Pointers
    int a = 15;

    std::cout << a << std::endl;
    std::cout << &a << std::endl;

    int *ptr = &a;

    std::cout << ptr << std::endl;
    std::cout << &ptr << std::endl;
    std::cout << *ptr << std::endl;

    *ptr = 100;
    std::cout << a << std::endl;


    return 0;
}
