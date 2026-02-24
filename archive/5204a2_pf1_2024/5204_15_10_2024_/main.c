#include <stdio.h>

int main(void)
{
    // Array - eyni tipden olan bir nece deyiseni saxamaq ucun
    // char letter = 'A';
    // char name[] = "John";
    // char name2[] = {'J', 'o', 'h', 'n'};
    // char name3[] = {'B', 'E', 'U'};

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char b[] = {'a', 'c'};


    // printf("%d\n", a[0]);
    // printf("%d\n", a[1]);
    // printf("%d\n", a[9]);

    // int arr[] = {3000, 5, 7000, 8, 10};
    // int x = 50000;
    // printf("%d\n", sizeof(x));
    // printf("%d\n", sizeof(arr));
    //
    // int arrUzunlug = sizeof(arr) / sizeof(arr[0]);
    // printf("%d\n", arrUzunlug);
    // printf("%d\n", arr[arrUzunlug - 1]);

    // // re-assignment
    // int a = 5;
    // printf("a edednin adresi - %p\n", &a);
    // printf("a edednin qiymeti - %d\n", a);
    //
    // a = 10;
    // printf("a edednin adresi - %p\n", &a);
    // printf("a edednin qiymeti - %d\n", a);


    int arr[] = {3000, 5, 7000, 8, 10};
    arr[0] = 1;
    arr[4] = 5;

    printf("%d\n", arr[0]);
    printf("%d\n", arr[4]);


    // next lesson -> printing array and memory location for each index
    // next lesson -> practicing what has been learned


    return 0;
}
