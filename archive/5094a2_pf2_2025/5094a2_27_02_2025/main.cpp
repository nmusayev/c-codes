#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int *ptr = &a;
    //
    // cout << *ptr << endl;
    //
    // *ptr = 25;
    //
    // cout << a << endl;



    // // Referencing to array
    // int a[] = {1, 3, 5, 7, 9};
    //
    // int *ptr = a;
    //
    // cout << *ptr << endl;
    // ptr = ptr + 1;
    //
    // cout << *ptr << endl;
    // ptr = ptr + 2;
    //
    // cout << *ptr << endl;
    //
    // ptr = ptr - 1;
    // cout << *ptr << endl;

    // cout << ptr << endl;

    // cout << ptr[0]  << endl;
    // cout << ptr[1]  << endl;
    // cout << a[1] << endl;


    // int *q = &a[3];
    // int d = q - ptr; // distance element count between q and p pointers
    // std::cout << "iki pointer (ptr ve q) arasindaki mesafe: " << d << std::endl;


    // int arr[] = {3, 5, 7, 8, 15, 22};
    // int *pointer = arr;
    // // int *pointer = &arr[0];
    //
    // int arrLength = sizeof(arr) / sizeof(arr[0]);
    //
    // for (int i = 0; i < arrLength; i++) {
    //     cout << *pointer << endl;
    //     pointer++;
    // }



    // Problems using pointers
    // 1. Uninitialized pointers (e.x. int *p = 25)
    // 2. Memory Leak (e.x. int a[2] = {1,2}; int *p = a; p = nullptr;)
    // 3. Dangling Pointers (pointer copied to function pointer parameter. and copied pointer deleted value. first one is pointing to nowhere)

    // int a = 25;
    // int *p = &a;
    //
    // // p -> a-nin unvani
    // // *p -> a-nin qiymeti



    // Istinadlar
    // Reference

    // Kopyalama
    int x = 10; // 0x1234
    int y = x;  // 0x9876

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    y++;

    cout <<  "x: " << x << endl;
    cout <<  "y: " << y << endl;

    int &z = x; // 0x1234
    z++;
    x++;

    cout <<  "x: " << x << endl;
    cout <<  "z: " << z << endl;





    // Qayib yazilacaq siyahi
    // Adlar:

    // Tabesizlik gosteren telebeler:




    return 0;
}
