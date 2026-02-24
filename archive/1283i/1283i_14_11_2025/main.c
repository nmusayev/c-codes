#include <stdio.h>


int main(void) {
    // // Finding maximum
    // // Array: {15, 35, 14, 67, 13, 27}
    // // Maksimum: 67
    // int a[] = {-15, -35, -14, -13, -67, -27};
    //
    // int max= a[0];
    // for(int i=1; i<6; i++) {
    //     if(a[i]>max) {
    //         max = a[i];
    //     }
    // }
    //
    // printf("max = %d\n", max);


    // // // Finding minimum
    // // // Array: {15, 35, 14, 67, 13, 27}
    //
    // int b[] = {15, 35, 14, 67, 13, 27};
    //
    // int min = b[0];
    //
    // for (int i = 1; i < sizeof(b) / sizeof(b[0]); i++) {
    //     if (min > b[i]) {
    //         min = b[i];
    //     }
    // }
    //
    // printf("%d\n", min);


    // // Swapping
    // int a = 5;
    // int b = 7;
    // printf("a=%d b=%d \n", a, b);
    //
    // int c = a; // c = 5
    // a = b; // a = 7, b = 7
    // b = c; // a = 7, b = 5
    // printf("a=%d b=%d ", a, b);




    int arr[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);  // 36 / 4 = 9

    // Printing array values
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");







    return 0;



}
