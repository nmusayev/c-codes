#include <stdio.h>
#include <stdbool.h>

int findMax(int a, int b) {
    // if(a > b) {
    //     return a;
    // }
    //
    // return b;

    // return (a > b) ? a : b;

    if(a > b) {
        return a;
    } else {
        return b;
    }
}

bool isEven(int n) {
    if(n % 2 == 0) {
        return true;
    }

    return false;
}

int findSumOfArray(int arr[], int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}


int artir(int n) {
    n = n + 1;
    return n;
}

// int findFactorial(int n) {
//     int result = 1;
//     for(int i = n; i >= 1; i--) {
//         result = result * i;
//     }
//
//     return result;
// }

int findFactorial(int n) { // recursion - rekursiya
    if(n == 0) { // baseline - bitmə nöqtəsi
        return 1;
    }
    return n * findFactorial(n - 1); // funksiya öz özünü çağırır
}

int main(void) {
    int n = 3;
    int cavab = findFactorial(n);
    printf("%d\n", cavab);





    // int a = 1;
    // printf("%d\n", a);


    // // Task 3
    // int a[] = {1, 2, 3,4,5,6,7,8,9,10};
    // int length = sizeof(a) / sizeof(a[0]);
    //
    // int sum = findSumOfArray(a, length);
    // printf("Sum: %d", sum);




    // bool cavab = isEven(5);
    //
    // printf("%d\n", cavab);

    // Task 2
    // Create function for finding if number is Even or not
    // bool isEven(int n)
    // isEven(5) => false
    // isEven(4) => true
    // stdbool library include: #include <stdbool.h>


    // // Task 1
    // // Creating function for finding max-imum of two integers
    // // int findMax(3, 5) => 5
    // int cavab = findMax(3, 5);
    //
    // printf("%d\n", cavab);



    return 0;
}
