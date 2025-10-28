#include <stdbool.h>
#include <stdio.h>

int main(void) {
    // // ternary operator = shortcut to if/else when assigning/returning a value
    // // (condition) ? value if true : value if false
    // bool sunny = false;

    // if(sunny) {
    //     printf("sunny\n");
    // } else {
    //     printf("not sunny\n");
    // }

    // sunny ? printf("sunny\n") : printf("not sunny\n");





       //  // array = a data structure that can store many values of the same data type.
       // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
       // // double prices[5];
       // //
       // // prices[0] = 5.0;
       // // prices[1] = 10.0;
       // // prices[2] = 15.0;
       // // prices[3] = 25.0;
       // // prices[4] = 20.0;
       //
       // printf("%.2lf \n", prices[0]);
       // printf("%.2lf \n", prices[4]);



    // int grades[] = {5, 10, 15, 20, 25};
    // printf("grades array-inin cekisi: %d\n", sizeof(grades));
    // printf("gardes[0]-in cekisi: %d\n", sizeof(grades[0]));
    // int uzunlug = sizeof(grades) / sizeof(grades[0]);
    // printf("grades array-inin uzunlugu: %d\n", uzunlug);


    // int grades[] = {5, 10, 15, 20, 25};
    // int uzunlug = sizeof(grades) / sizeof(grades[0]);
    //
    // for(int i = 0; i < uzunlug; i++) {
    //     printf("grades[%d] = %d\n", i, grades[i]);
    // }



    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data

    int numbers[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int rows = sizeof(numbers)/sizeof(numbers[0]); // 2
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]); // 3

    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    // printf("%d\n", numbers[0][0]);
    // printf("%d\n", numbers[1][2]);
    // printf("%d\n", numbers[0][2]);
    // printf("%d\n", numbers[0][1]);




    return 0;
}
