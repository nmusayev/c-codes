#include <stdio.h>
// Mövzu - Funksiya (Function)
void birthday() {
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear ..!\n");
    printf("Happy Birthday to you!\n");
}

void birthday2(char name[]) {
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
}

void birthday3(char name[], int age) {
    printf("Happy Birthday %s!\n", name);
    printf("You are %d years old!\n", age);
}

int kvadratTap(int n) {
    int cavab = n * n;
    return cavab;
    // Return-den sonra hecne execute olmur
    printf("Happy Birthday to you!\n");
}
int cemKvadrati(int a, int b) {
    int cem = a + b;
    // int cavab = cem * cem;
    int cavab = kvadratTap(cem);
    return cavab;
}
int main(void) {
    int cavab = cemKvadrati(3, 5);
    printf("%d", cavab);
    // Tapsiriq
    // Funksiya yaradin
    // Iki tam eded goturur
    // Bu iki tam ededin, ceminin, kvadratini tapir
    // 3 ve 5 goturur, 64
    // Funksiya adi cemKvadrati


    // int k = kvadratTap(5);
    //
    // printf("%d\n", k);


    // birthday3("Azer", 20);
    // birthday3("Eli", 19);
    // birthday3("Yusif", 21);


    // birthday2("Eli");
    // birthday2("Azer");

    // birthday();
    // birthday();
    // birthday();

    return 0;
}
