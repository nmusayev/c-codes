#include <stdio.h>


void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main(void)
{
    // 1. 5 ölçülü array yaradın
    // 2. İstifadəçidən 5 input götürüb, array-in elementlərinə
    // yazın (for loop ilə)
    // 3. Array-in elementlərini cəmləyirsiz (ayrı for loop ilə)
    // 4. Nəticəni ekrana print edirsiz


    // int arr[5];
    // int n;
    //
    // for(int i = 0; i < 5; i++) {
    //     scanf("%d", &n);
    //     arr[i] = n;
    // }
    //
    // int sum = 0;
    // for(int i = 0; i < 5; i++) {
    //     sum = sum + arr[i];
    // }
    //
    // printf("sum = %d\n", sum);


    // // Finding maximum
    // // Array: {15, 35, 14, 67, 13, 27}
    // // Maksimum: 67
    //
    // int arr[] = {-15, -35, -14, -67, -13, -27};
    //
    // int max = arr[0];
    //
    // for (int i = 1; i < 6; i++) {
    //     if (arr[i] > max) {
    //         max = arr[i];
    //     }
    // }
    //
    // printf("max = %d", max);



    // // Finding minimum
    // int arr[] = {-15, -35, -14, -67, -13, -27};
    //
    // int min = arr[0];
    //
    // for (int i = 1; i < 6; i++) {
    //     if (arr[i] < min) {
    //         min = arr[i];
    //     }
    // }
    //
    // printf("min = %d", min);

    // Swapping
    int a = 5;
    int b = 10;
    printf("%d\n", a);
    printf("%d\n", b);

    int temp = a;
    a = b;
    b = temp;
    printf("%d\n", a);
    printf("%d\n", b);


    // // Sorting array, bubble sort
    //  // char array[] = {'F', 'A', 'D', 'B', 'C'};
    //  int size = sizeof(arr)/sizeof(arr[0]);
    //
    //  printArray(arr, size);
    //
    //  sort(arr, size);


    int arr[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);


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

    printArray(arr, size);


    return 0;
}
