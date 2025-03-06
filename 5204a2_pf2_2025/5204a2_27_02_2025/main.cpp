#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {3, 5, 7, 8, 15, 22};
    // int *pointer = arr;
    // // int *pointer = &arr[0];
    //
    // int arrLength = sizeof(arr) / sizeof(arr[0]);
    //
    // for (int i = 0; i < arrLength; i++) {
    //     cout << *pointer << endl;
    //     pointer = pointer + 1;
    // }

    // Problems using pointers
    // 1. Uninitialized pointers (e.x. int *p = 25)
    // 2. Memory Leak (e.x. int a[2] = {1,2}; int *p = a; p = nullptr;)
    // 3. Dangling Pointers (pointer copied to function pointer parameter. and copied pointer deleted value. first one is pointing to nowhere)

    // Istinadlar
    // Reference
    int x = 10;
    int &y = x;

    // x -> 0x1234
    // y -> 0x1234

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    x++;

    std::cout << x << std::endl;
    std::cout << y << std::endl;



    // x++;
    // y++;
    //
    // std::cout << x << std::endl;
    // std::cout << y << std::endl;
    //
    // std::cout << "Address of x = " << &x << std::endl;
    // std::cout << "Address of y = " << &y << std::endl;


    return 0;
}
