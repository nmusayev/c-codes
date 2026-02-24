#include <stdio.h>
#include <stdbool.h>


int findMax(int a, int b) {
    // return a > b ? a : b;

    if(a > b) {
        return a;
    } else {
        return b;
    }
}

bool isEven(int n) {
    if(n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}


int increase(int a) {
    a = a + 1;
    return a;
}

int findFactorial2(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int findFactorial(int n) { // recursion function
    if(n == 1) { // baseline
        return 1;
    }

    return n * findFactorial(n - 1); // function call itself
    // return 3 * 2 * 1 * 1;
}

int main(void) {
    // 3! = 3 * 2 * 1 = 6
    int n = 3;
    int cavab = findFactorial(n);
    printf("%d\n", cavab);


    // // // copy value - kopyalanma qiymetin
    // int a = 5;
    // printf("%d\n", increase(a)); // 6
    // printf("%d\n", a); // 5


    // Task 2
    // Create function for finding if number is Even or not
    // bool isEven(int n)
    // isEven(5) => false
    // isEven(4) => true
    // stdbool library include: #include <stdbool.h>

    // int a = isEven(4);
    // printf("%d\n", a);



    // // Task 1
    // // Creating function for finding max-imum of two integers
    // // int findMax(3, 5) => 5

    // int max = findMax(9, 11);
    // printf("%d\n", max);


    return 0;
}
