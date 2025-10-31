#include <stdbool.h>
#include <stdio.h>

int main(void) {
    // // // ternary operator = shortcut to if/else when assigning/returning a value
    // // // (condition) ? value if true : value if false
    // bool sunny = false;
    //
    // sunny ? printf("sunny\n") : printf("not sunny\n");
    //
    // // if(sunny) {
    // //     printf("sunny\n");
    // // } else {
    // //     printf("not sunny\n");
    // // }


     // array = a data structure that can store many values of the same data type.
    // int s[] = {75, 60, 95, 65, 67, 73, 45, 85};
    //
    // printf("%d\n", s[0]);
    // printf("%d\n", s[1]);
    // printf("%d\n", s[7]);
    //
    // s[0] = 99;
    // printf("%d\n", s[0]);

    // int s[3];
    // s[0] = 75;
    // s[1] = 85;
    // s[2] = 95;
    //
    // printf("%d\n", s[1]);



    // int s[] = {75, 60, 95, 65, 67, 45, 85};
    //
    // for(int i = 0; i < 7; i++) {
    //     printf("%d ", s[i]);
    // }

    // int a = 10;
    // int size_of_a = sizeof(a);
    // printf("%d\n", size_of_a);

    int s[] = {75, 60, 95, 65, 67, 45};
    int length = sizeof(s) / sizeof(s[0]);

    for(int i = 0; i < length; i++) {
        printf("%d ", s[i]);
    }


    // int size_of_s = sizeof(s);
    // printf("%d\n", size_of_s);
    //
    // printf("%d\n", sizeof(s[0]));



    return 0;
}
