#include <stdio.h>

int main(void) {
    // int a = 1;

    // printf("%d\n", a++);
    // printf("%d\n", ++a);

    // for (int i = 1; i <= 10; i++) {
    //     // continue;
    //     // break;
    // }

    // // Arrays
    // int numbers1 = 15;
    // int numbers2 = 25;
    // int numbers3 = 50;
    // printf("%d\n", numbers1);

    // int numbers[] = {15, 25, 50};
    // printf("%d\n", numbers[0]);
    // printf("%d\n", numbers[2]);

    // array reassignment
    // numbers[2] = 100;
    // printf("%d\n", numbers[2]);

    // int a = 100000000000000;
    // printf("%d\n", sizeof(a));


    // Finding size of array
    int numbers[] = {15, 25, 50, 70, 90};

    // printf("%d\n", sizeof(numbers));
    // printf("%d\n", sizeof(numbers[2]));

    int uzunluqArray = sizeof(numbers) / sizeof(numbers[0]);
    //
    printf("%d\n", uzunluqArray);

    // printf("%d\n", uzunluqArray);
    printf("%d\n", numbers[uzunluqArray - 1]);


    for (int i = 0; i < uzunluqArray; i++) {
        printf("%d\n", numbers[i]);
    }

    // for (int i = 0; i < uzunluqArray; i++) {
    //     if (i == uzunluqArray - 1) {
    //         printf("%d", numbers[i]);
    //     } else {
    //         printf("%d, ", numbers[i]);
    //     }
    // }

    // printf("1-ci elementing yaddashdaki yeri: %p\n", &numbers[0]);
    // printf("2-ci elementing yaddashdaki yeri: %p\n", &numbers[1]);
    // printf("3-ci elementing yaddashdaki yeri: %p\n", &numbers[2]);
    // printf("4-ci elementing yaddashdaki yeri: %p\n", &numbers[3]);
    // printf("5-ci elementing yaddashdaki yeri: %p\n", &numbers[4]);



    // Task 1
    // 1. Creating array with 5 double type elements
    // 2. Change third element to 100

    return 0;
}
