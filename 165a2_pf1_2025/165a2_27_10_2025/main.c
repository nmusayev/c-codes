#include <stdbool.h>
#include <stdio.h>

int main(void) {
    // ternary operator = shortcut to if/else when assigning/returning a value
      // (condition) ? value if true : value if false

    // bool sunny = true;

    // if(sunny) {
    //     printf("sunny\n");
    // } else {
    //     printf("not sunny\n");
    // }

    // !sunny ? printf("sunny\n") : printf("not sunny\n");



    // // array = a data structure that can store many values of the same data type.
    //
    //    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    //    // double prices[5];
    //    //
    //    // prices[0] = 5.0;
    //    // prices[1] = 10.0;
    //    // prices[2] = 15.0;
    //    // prices[3] = 25.0;
    //    // prices[4] = 20.0;
    //
    //    printf("%.2lf \n", prices[0]);
    //    printf("%.2lf \n", prices[4]);

    //
    // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    //
    // int arraySize = sizeof(prices);
    // printf("Size of array: %d\n", arraySize);
    //
    // printf("Size of prices[0]: %d\n", sizeof(prices[0]));
    //
    // int lengthOfPrices = sizeof(prices) / sizeof(prices[0]);
    // printf("Length of prices: %d\n", lengthOfPrices);


    // int a = 10;
    // int sizeA = sizeof(a);
    // printf("%d", sizeA);



    // double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
    //
    // int uzunlug = sizeof(prices) / sizeof(prices[0]);
    // printf("Length of prices: %d\n", uzunlug);



    // int qiymetler[] = {5, 10, 15, 20, 25};
    //
    // int uzunlug = sizeof(qiymetler) / sizeof(qiymetler[0]);
    //
    // for(int i = 0; i < uzunlug; i++) {
    //     printf("%d\n", qiymetler[i]);
    // }



    // 2D array = an array, where each element is an entire array
       //            useful if you need a matrix, grid, or table of data

   // int numbers[2][3];
   //
   // numbers[0][0] = 1;
   // numbers[0][1] = 2;
   // numbers[0][2] = 3;
   // numbers[1][0] = 4;
   // numbers[1][1] = 5;
   // numbers[1][2] = 6;

       int numbers[2][3] = {
                            {1, 2, 3},
                            {4, 5, 6}
                           };

       int rows = sizeof(numbers)/sizeof(numbers[0]);
       int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

       printf("rows: %d\ncolumns: %d\n", rows, columns);

       for(int i = 0; i < rows; i++) {
          for(int j = 0; j < columns; j++) {
             printf("%d ", numbers[i][j]);
          }
          printf("\n");
       }


    return 0;
}
