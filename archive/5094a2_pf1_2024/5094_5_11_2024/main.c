#include <stdio.h>

void say_hello() {
    printf("Hello, all!\n");
}

void say_hello2(char name[]) {
    printf("Hello, %s!\n", name);
}

int toplama(int a, int b) {
    // return a + b;
    int sum = a + b;

    return sum;
}

// quvvet(5, 3) -> 5*5*5
int quvvet(int a, int quvvet) {
    int result = 1;
    for (int i = 0; i < quvvet; i++) {
        result *= a;
    }

    return result;
}

int max(int a, int b) {
    // return 125;
    if(a > b) {
        return a;
    } else {
        return b;
    }
    // return a > b ? a : b;
}

int main(void)
{
    // Funksiyalar
    // say_hello();
    //
    // say_hello2("BEU");
    // say_hello2("BMU");
    // say_hello2("5");

    int cavab = toplama(5, 10);
    printf("toplama funksiyasinin neticesi: %d\n", cavab);

    // int x = 15;
    // int y = 25;
    //
    // int f = toplama(x, y);
    // printf("toplama funksiyasinin neticesi: %d\n", f);


    // printf("toplama funksiyasinin neticesi: %d\n", toplama(5, 10));

    int netice3 = quvvet(5, 3);
    printf("quvvet funksiyasinin netice3: %d\n", netice3);


    // // Find the minimum in the array
    // int a[] = {1, 2, 7, 4, 5};
    //
    // int min = a[0];
    //
    // for (int i = 0; i < 5; i++) {
    //     if(a[i] < min) {
    //         min = a[i];
    //     }
    // }
    //
    // printf("%d\n", min);


    // Practice task
    // max(3, 5) -> 5
    int netice4 = max(5, 3);
    printf("max funksiyasinin netice4: %d\n", netice4);

    return 0;
}
