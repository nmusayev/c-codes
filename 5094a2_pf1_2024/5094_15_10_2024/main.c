#include <stdio.h>

int main(void)
{
    // Arrays
    // char letter = 'A';
    //
    // char name[] = "John";
    // char name2[] = {'J', 'o', 'h', 'n'};

    // int numbers1 = 15;
    // int numbers2 = 25;
    // int numbers3 = 50;
    // printf("%d\n", numbers1);

    // int a = 10;
    // printf("a-nin yaddashdaki yeri: %p\n", &a);
    // printf("a-nin qiymeti: %d\n", a);
    //
    // // reassignment  -> yeniden qiymet teyin etme
    // a = 20;
    // printf("a-nin yaddashdaki yeri: %p\n", &a);
    // printf("a-nin qiymeti: %d\n", a);



    // int numbers[] = {15, 25, 50};
    // printf("%d\n", numbers[0]);
    // printf("%d\n", numbers[2]);
    //
    // // array reassignment
    // numbers[2] = 100;
    // printf("%d\n", numbers[2]);

    // int a = 10;
    // printf("%d\n", sizeof(a));

    // Finding size of array
    int numbers[] = {15, 25, 50, 70, 90, 100, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int uzunluqArray = sizeof(numbers) / sizeof(numbers[0]);

    printf("1-ci elementing yaddashdaki yeri: %p\n", &numbers[0]);
    printf("2-ci elementing yaddashdaki yeri: %p\n", &numbers[1]);
    printf("3-ci elementing yaddashdaki yeri: %p\n", &numbers[2]);
    printf("4-ci elementing yaddashdaki yeri: %p\n", &numbers[3]);
    printf("5-ci elementing yaddashdaki yeri: %p\n", &numbers[4]);

    // printf("%d\n", uzunluqArray);
    // printf("%d\n", numbers[uzunluqArray - 1]);

    // // Printing elements of array
    // printf("{");
    // for (int i = 0; i < uzunluqArray; i++) {
    //     if (i == uzunluqArray - 1) {
    //         printf("%d", numbers[i]);
    //     } else {
    //         printf("%d, ", numbers[i]);
    //     }
    // }
    // printf("}");

    // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};



    return 0;
}
