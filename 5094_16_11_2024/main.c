#include <stdio.h>

void printingTillFive() {
    for(int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
}

void printTill(int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\n", i);
    }
}

int toplama(int a, int b) {
    int sum = a + b;
    return sum;
}

// funksiyanin daxilinde funksiya istifade etmek
int hesablama(int a, int b) {
    int cavab = 2 * toplama(a, b);

    return cavab;
}

// Recursion
int factorialHesabla(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorialHesabla(n - 1);
}



int main(void)
{
    // printTill(5);
    // printf("------\n");
    //
    // printingTillFive();
    // printf("------\n");
    //
    // printingTillFive();
    // printf("------\n");
    //
    // printTill(3);
    // printf("------\n");
    //
    // printTill(4);
    // printf("------\n");
    //
    // printTill(2);
    // printf("------\n");

    // returning from fuction
    // printf("%d\n", toplama(3, 5));
    //
    // int cavab = toplama(2, 3);
    // printf("%d\n", cavab);

    // int x = hesablama(5, 10);
    // printf("%d\n", x);

    int result = factorialHesabla(5);
    printf("%d\n", result);

    return 0;
}
