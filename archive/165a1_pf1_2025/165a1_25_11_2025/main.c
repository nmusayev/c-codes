#include <stdio.h>
#include <stdbool.h>

int findMax(int a, int b) {
    if(a > b) {
        return a;
    }

    return b;
}

bool isEven(int n) {
    // return n % 2 == 0;
    if(n % 2 == 0) {
        return true;
    }
    return false;
}

int findSumOfArray(int a[], int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum = sum + a[i];
    }

    return sum;
}

int artır(int a) {
    a = a + 1;
    return a;
}


// int findFactorial(int n) {
//     int r = 1;
//     for(int i = 1; i <= n; i++) {
//         r = r * i;
//     }
//
//     return r;
// }

int findFactorial(int n) { // recursion function
    if(n == 0) { // baseline
        return 1;
    }

    return n * findFactorial(n - 1); // funksiya oz ozunu cagirir
    // 3 * 2 * 1 * 1;
}

int main(void) {
    int n = 3;
    int cavab = findFactorial(n);
    printf("%d\n", cavab);

    // // kopyalanma qiymetin
    // int a = 5;
    // artır(a);
    // printf("%d\n", a);


    // // Task 3
    // int a[] = {1, 2, 3,4,5,6,7,8,9,10};
    // int length = sizeof(a) / sizeof(a[0]);
    // int sum = findSumOfArray(a, length);
    // printf("Sum: %d", sum);


    // Task 2
    // Create function for finding if number is Even or not
    // bool isEven(int n)
    // isEven(5) => false
    // isEven(4) => true
    // stdbool library include: #include <stdbool.h>

    // bool cavab = isEven(5);
    // printf("%d\n", cavab);


    // // Task 1
    // // Creating function for finding max-imum of two integers
    // // int findMax(3, 5) => 5

    // int cavab = findMax(3, 5);
    // printf("%d\n", cavab);

    return 0;
}
