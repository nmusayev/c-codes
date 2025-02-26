#include <iostream>

int main()
{
    // // Gostericiler (Week 6)
    // // Pointers
    // int a = 10;
    // int *ptr = &a;
    //
    // std::cout << a << std::endl;
    // std::cout << &a << std::endl;
    // std::cout << ptr << std::endl;
    // std::cout << &ptr << std::endl;
    // std::cout << *ptr << std::endl;


    // // // Dynamic Allocation (from Heap) with Pointer (not deleting till program finish, except if manually deleted)
    // int *p = new int[5];
    // p[0] = 1;
    // p[1] = 2;
    //
    // std::cout << p[1] << std::endl;
    //
    // delete []p;
    // p = nullptr; // NULL or nullptr can be written. nullptr is more advicable



    // // Benefit of dynamic allocation from heap with pointer
    // // array size can be changed (with deleting and recreating)
    // int *p = new int[20];
    //
    // delete [] p;
    //
    // p = new int[40];



    // Pointer Arithmetic
    int a[] = {1, 2, 3, 4, 5};
    int *p = a;

    std::cout << *p << std::endl;

    p++;
    std::cout << *p << std::endl;

    p--;
    std::cout << *p << std::endl;

    p = p + 2;
    std::cout << *p << std::endl;

    p = p - 2;
    std::cout << *p << std::endl;

    int *q = &a[3];
    int d = q - p; // distance element count between q and p pointers
    std::cout << d << std::endl;


    return 0;
}
