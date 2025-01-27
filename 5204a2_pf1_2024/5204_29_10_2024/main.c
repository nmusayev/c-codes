#include <stdio.h>

int main(void)
{
    // // Swapping
    // int a = 3;
    // int b = 4;
    //
    // printf("%d %d\n", a, b);
    //
    // int c = b;
    // b = a;
    // a = c;
    //
    // printf("%d %d\n", a, b);


    // // Sorting - Bubble Soring Alorithm
    // int array[] = {7, 5, 3, 2, 6}; // 7, 5, 3.  3, 5, 7
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
    //         if(array[j] <  array[j+1])
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

    // 2D array
    int b[2][3] = {
        {1,2,3}, // 0
        {4,5,6}  // 1
    };







    // printf("%d\n", b[1][2]);


    // printf("%d\n", b[1][1]);

    b[1][1] = 20;

    // printf("%d\n", b[1][1]);




    return 0;
}
