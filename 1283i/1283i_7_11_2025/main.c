#include <stdio.h>
#include <sys/errno.h>

int main(void) {
// 2 Dimentional Arrays

    // int numbers[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}
    // };
    //
    // int firstLayerLength = sizeof(numbers)/sizeof(numbers[0]); // 2
    // int secondLayerLength = sizeof(numbers[0])/sizeof(numbers[0][0]); // 3
    //
    // for(int i = 0; i < firstLayerLength; i++) {
    //     for (int j = 0; j < secondLayerLength; j++) {
    //         printf("%d ", numbers[i][j]);
    //     }
    //     printf("\n");
    // }




    // printf("%d\n", numbers[0][2]);
    //
    // numbers[0][2] = 9;
    //
    // printf("%d\n", numbers[0][2]);


    // 1. creating array with 5 elements
    // 2. take input one-by-one from user and put it to arrays elemnts
    // (use for loop)
    // 3. sum elements of array with a new for loop
    // 4. print the result to console

    int a[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += a[i];
    }

    printf("The sum of the elements is: %d\n", sum);
}
