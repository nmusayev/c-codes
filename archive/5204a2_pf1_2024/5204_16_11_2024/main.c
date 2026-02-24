#include <stdio.h>

void printingTillFive() {
    for(int i = 0; i < 5; i++) {
        printf("a - %d\n", i);
    }
}

void printingTill(int n) {
    for(int i = 0; i < n; i++) {
        printf("a - %d\n", i);
    }
}

void printingRange(int start, int end) {
    for(int i = start; i < end; i++) {
        printf("b - %d\n", i);
    }
}

int toplama(int a, int b) {
    int cavab = a + b;
    return cavab;
}

// Funksiyanin daxilinde funksiyani cagirma
int hesablama(int a, int b) {
    int cavab = 2 * toplama(a, b);

    return cavab;
}

// Recursion fuction - oz ozunu cagiran funksiya
int factorialHesabla(int n) {
    if(n <= 1) {
        return 1;
    }

    return n * factorialHesabla(n - 1);
}

int main(void)
{
    // printingTillFive();
    // printf("---------------\n");
    //
    // printingTillFive();
    // printf("---------------\n");
    //
    // printingTillFive();
    // printf("---------------\n");
    //
    // printingTill(3);
    // printf("---------------\n");
    //
    // printingTill(4);
    // printf("---------------\n");
    //
    // printingTill(2);
    // printf("---------------\n");
    //
    // printingRange(3, 5);
    // printf("---------------\n");

    // printf("%d\n", toplama(3, 5));
    //
    // int cavab = toplama(2, 5);
    // printf("%d\n", cavab);

    // int x = 3;
    // int y = 5;
    // printf("%d %d\n", x, y);
    //
    // int temp = 3;
    // x = y;
    // y = temp;
    // printf("%d %d\n", x, y);

    // Funksiyanin daxilinde funksiyani cagirma
    //3 5 => 2 * (3 + 5) => 16
    // printf("%d\n", hesablama(3, 5));

    //5 10 => 2 * (5 + 10) => 30
    // printf("%d\n", hesablama(5, 10));


    // Recursion
    // 5! = 5 * 4 * 3 * 2 * 1 = 120
    int n = 5;

    if(n < 1) {
        printf("Emeliyyat aparila bilmir");
    } else {
        int result = factorialHesabla(n);
        printf("%d ededinin factorial-i: %d\n", n, result);
    }

    return 0;
}
