#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// // Calling function inside other function
// void printHello() {
//     printf("Hello\n");
// }
//
// void printSomething() {
//     printf("Something\n");
//     printHello();
// }

// int factorial(int n) {
//     if(n == 1) return 1;
//
//     return n * factorial(n - 1);
// }

int kvadrat(int a) {
    int netice = a * a;

    return netice;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int cem(int a, int b) {
    return a + b;
}

int main(void)
{
    int result = cem(10, 15);
    printf("%d\n", result);

    // int netice = max(3, 5);
    // printf("%d\n", netice);

    // int a = kvadrat(5);
    // printf("%d\n", a);
    //
    // // printf("%d\n", kvadrat(5));


    // // Calling function inside other function
    // printSomething();
    // printHello();

    // // Recursion - Calling function itself
    // int netice = factorial(3);
    // printf("%d\n", netice);

    // // math.h lib - https://www.tutorialspoint.com/c_standard_library/math_h.htm
    // double netice = sqrt(25);
    // printf("%.2f\n", netice);
    //
    // double netice2 = pow(2, 5);
    // printf("%.2f\n", netice2);
    //
    //
    // // string.h lib - https://www.tutorialspoint.com/c_standard_library/string_h.htm
    // char name[] = "John";
    // printf("%d\n", strlen(name));


    //
    // int arr[] = {5, 12, 3, 9, 15};
    // int max = arr[0];
    // int min = arr[0];
    //
    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    //     if (arr[i] > max) { max = arr[i]; }
    //
    //     if (arr[i] < min) { min = arr[i]; }
    // }
    //
    // printf("%d\n", max);
    // printf("%d\n", min);


    // int a;
    // int b;
    //
    // scanf("%d",&a);
    // scanf("%d",&b);
    //
    // if(a > b) {
    //     printf("%d", a);
    // } else {
    //     printf("%d", b);
    // }



    return 0;
}
