#include <stdio.h>

int main(void) {
    // array = a data structure that can store many values of the same data type.
    // int grades[] = {10, 15, 20, 25};

    // printf("%d \n", grades[0]);
    // printf("%d \n", grades[3]);
    //
    // grades[0] = 5;
    // printf("%d \n", grades[0]);

    // char letter = 'A';
    // int a = 50000000;
    // printf("%d\n", sizeof(letter));
    // printf("%d\n", sizeof(a));



    // // Finding size of array
    // int grades[] = {10, 4000, 20, 25, 1000};
    // printf("umumi ceki: %d\n", sizeof(grades));
    // printf("birinin cekisi: %d\n", sizeof(grades[0]));
    //
    // int uzuqluq = sizeof(grades) / sizeof(grades[0]);
    // printf("uzunlug: %d\n", uzuqluq);
    //
    // // printing array elements
    // for(int i = 0; i < uzuqluq; i = i + 1) {
    //     printf("%d\n", grades[i]);
    // }

    // // Finding Maximum OR Minimum
    // int grades[] = {10, 4000, 20, 25, 1000};
    //
    // int max = grades[0];
    // int uzunluq = sizeof(grades) / sizeof(grades[0]);
    //
    // for (int i = 1; i < uzunluq; i++) {
    //     if(grades[i] > max) {
    //         max = grades[i];
    //     }
    // }
    // printf("max = %d\n", max);


    // // Finding Maximum OR Minimum
    // int grades[] = {10, 4000, 20, 25, 1000};
    //
    // int min = grades[0];
    // int uzunluq = sizeof(grades) / sizeof(grades[0]);
    //
    // for (int i = 1; i < uzunluq; i++) {
    //     if(grades[i] > min) {
    //         min = grades[i];
    //     }
    // }
    // printf("min = %d\n", min);


    int grades[] = {10, 4000, 20, 25, 1000};

    int cem = grades[0] + grades[2];

    printf("%d\n", cem);


    // // 2D arrays
    // int numbers[2][3] = {
    //                      {1, 2, 3},
    //                      {4, 5, 6}
    //                     };
    //
    // printf("%d\n", numbers[1][0]);
    //
    //
    // // int numbers[2][3];
    //
    // int rows = sizeof(numbers)/sizeof(numbers[0]);
    // int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
    //
    // printf("rows: %d\n", rows);
    // printf("columns: %d\n", columns);
    //
    // numbers[0][0] = 1;
    // numbers[0][1] = 2;
    // numbers[0][2] = 3;
    // numbers[1][0] = 4;
    // numbers[1][1] = 5;
    // numbers[1][2] = 6;
    //
    // for(int i = 0; i < rows; i++)
    // {
    //    for(int j = 0; j < columns; j++)
    //    {
    //       printf("%d ", numbers[i][j]);
    //    }
    //    printf("\n");
    // }



    return 0;
}
