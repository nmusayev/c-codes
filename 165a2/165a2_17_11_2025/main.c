#include <stdio.h>

void birthday() {
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear .. !\n");
    printf("Happy Birthday to you!\n");
}

void birthday2(char a[]) {
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s !\n", a);
    printf("Happy Birthday to you!\n");
}

void birthday3(char name[], int age) {
    printf("Ad günün mübarək, %s\n", name);
    printf("Sənin %d yaşın olur!\n", age);
}

int kvadratTap(int n) {
    int a = n * n;

    return a;
}


int cemKvadrati(int a, int b) {
    int cem = a + b;
    // int cavab = cem * cem;
    int cavab = kvadratTap(cem);

    return cavab;
}


int main(void) {
    // Funksiya
    int cavab = cemKvadrati(3, 5);
    printf("%d\n", cavab);


    // int cavab = kvadratTap(5);
    //
    // printf("%d\n", cavab);


    // birthday3("Əli", 20);
    // birthday3("Əhməd", 19);
    // birthday3("Azer", 18);

    // printf("Ad günün mübarək, Əli\n");
    // printf("Sənin 20 yaşın olur!\n");

    // printf("Ad günün mübarək, Əhməd\n");
    // printf("Sənin 19 yaşın olur!\n");

    // birthday();
    // birthday();
    // birthday();

    // birthday2("BEU");
    // birthday2("BEU2");
    // birthday2("BEU3");
    // // birthday2("BEU3");
    //
    // char name[] = "ABC";
    // birthday2(name);

    return 0;
}
