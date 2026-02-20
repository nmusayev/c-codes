#include <stdio.h>

int main(void)
{
    // 1. 5 elementi olan array yaradın
    // 2. İstifadəçidən 5 input götürüb, array-in elementlərinə
    // yazın (for loop ilə)
    // 3. Array-in elementlərini cəmləyirsiz (ayrı for loop ilə)
    // 4. Nəticəni ekrana print edirsiz

    // int a[5];
    //
    // for(int i = 0; i < 5; i++) {
    //     printf("%d elemente eded daxil edin: ", i + 1);
    //     scanf("%d", &a[i]);
    // }
    //
    // int uzunluq = sizeof(a) / sizeof(a[0]);
    // printf("uzunluq = %d\n", uzunluq);
    //
    // int sum = 0;
    // printf("sum = %d\n", sum);
    //
    // for(int i = 0; i < uzunluq; i++) {
    //     sum += a[i];
    // }
    //
    // printf("netice: %d\n", sum);


    // // // Finding maximum
    // // // Array: {15, 35, 14, 67, 13, 27}
    // // // Maksimum: 67
    // int b[] = {15, 35, 14, 67, 13, 27};
    //
    // int max = b[0];
    //
    // for(int i = 1; i < 6; i++) {
    //     if(b[i] > max) {
    //         max = b[i];
    //     }
    // }
    //
    // printf("%d\n", max);


    // // Finding minimum
    // int b[] = {15, 35, 14, 67, 13, 27};
    //
    // int min = b[0];
    //
    // for(int i = 1; i < 6; i++) {
    //     if(b[i] < min) {
    //         min = b[i];
    //     }
    // }
    //
    // printf("%d\n", min);


    // // Swap
    // int a = 5;
    // int b = 10;
    //
    // printf("a %d\n", a);
    // printf("b %d\n", b);
    //
    // int c = a;
    // a = b;
    // b = c;
    //
    // printf("a %d\n", a);
    // printf("b %d\n", b);



    int arr[] = {15, 35, 14, 67, 13, 27};

    int size = sizeof(arr) / sizeof(arr[0]);

    // printing elements
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    // sorting
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



    // printing elements
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}
