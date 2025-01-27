#include <stdio.h>

void adGunuSeiri() {
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear...YOU!");
    printf("\nHappy birthday to you!\n");
}


void adGunuSeiriAdIle(char name[]) {
    printf("\nHappy birthday to %s!", name);
    printf("\nHappy birthday to %s!", name);
    printf("\nHappy birthday dear...YOU!");
    printf("\nHappy birthday to %s!", name);
}

void adGunuSeiriniVerilenSayQederTekrarla(char name[], int n) {
    for (int i = 0; i < n; i++) {
        adGunuSeiriAdIle(name);
    }
}

int toplama(int a, int b) {
    // return a + b;

    int sum = a + b;

    return sum;
}

int f(int x) {
    int result = 5 * x + 3;

    return result;
}


int main(void)
{
    // // min in the array
    // int a[] = {3, 1, 7, 2, 5};
    //
    // int min = a[0];
    //
    // for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++) {
    //     if (a[i] < min) {
    //         min = a[i];
    //     }
    // }
    //
    // printf("%d\n", min);

    // CLion
    // Websites: linkedin.com, udemy.com

    // Topic: Function
    // adGunuSeiri();

    // adGunuSeiriAdIle("Kenan");
    // adGunuSeiriAdIle("Rasul");

    adGunuSeiriniVerilenSayQederTekrarla("Kenan", 5);
    printf("------");
    adGunuSeiriniVerilenSayQederTekrarla("Resul", 3);

    // int x = 3;
    // int y = 5;


    // int c = toplama(3, 5);
    // printf("toplama: %d", c);



    return 0;
}
