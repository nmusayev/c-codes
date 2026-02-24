#include <stdio.h>

int main(void)
{
    // // swapping values
    // int a = 5;
    // int b = 7;
    // printf("a = %d, b = %d\n", a, b);
    //
    // // temperary c variable for helping swap
    // int c = a;
    // a = b;
    // b = c;
    //
    // printf("a = %d, b = %d\n", a, b);
    //
    //
    // // Sorting
    // int array[] = {7, 5, 3};
    // int size = sizeof(array) / sizeof(array[0]);
    //
    // for(int i = 0; i < size; i++) {
    //     printf("array[%d] = %d\n", i, array[i]);
    // }
    //
    // printf("------------\n");
    //
    // for(int i = 0; i < size - 1; i++)
    // {
    //     for(int j = 0; j < size - i - 1; j++)
    //     {
    //         if(array[j] >  array[j+1])
    //         {
    //             int temp = array[j];
    //             array[j] = array[j+1];
    //             array[j+1] = temp;
    //         }
    //     }
    // }
    //
    // for(int i = 0; i < size; i++) {
    //     printf("array[%d] = %d\n", i, array[i]);
    // }


    // // 2D Arrays
    // int numbers[2][3] = {
    //                      {1, 2, 3},
    //                      {4, 5, 6}
    //                     };
    //
    // int rows = sizeof(numbers)/sizeof(numbers[0]);
    // int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);
    //
    // for(int i = 0; i < rows; i++)
    // {
    //    for(int j = 0; j < columns; j++)
    //    {
    //       printf("%d ", numbers[i][j]);
    //    }
    //    printf("\n");
    // }
    //
    // printf("------------\n");
    //
    //
    // // chaning value in 2D array
    // numbers[1][1] = 20;
    //
    // // printing after changing
    // for(int i = 0; i < rows; i++)
    // {
    //     for(int j = 0; j < columns; j++)
    //     {
    //         printf("%d ", numbers[i][j]);
    //     }
    //     printf("\n");
    // }

    // int arraySize;
    // int rotations;
    //
    // scanf("%d %d", &arraySize, &rotations);
    //
    // int array[arraySize];
    //
    // // getting array from console
    // for (int i = 0; i < arraySize; i++) {
    //     scanf("%d", &array[i]);
    // }
    //
    // // rotating array
    // for (int i = 0; i < rotations; i++) {
    //     int firstElement = array[0];
    //
    //     for (int j = 0; j < arraySize - 1; j++) {
    //         array[j] = array[j + 1];
    //     }
    //
    //     array[arraySize - 1] = firstElement;
    // }
    //
    // // printing result
    // for (int i = 0; i < arraySize; i++) {
    //     printf("%d ", array[i]);
    // }



    // Find the maximum in the array
    int a[] = {1, 2, 7, 4, 5};

    int max = a[0];

    for(int i = 1; i < 5; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    printf("%d\n", max);

    


    return 0;
}
