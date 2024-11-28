#include <stdio.h>

int main(void)
{
    // // Task 1
    // // Sum and Average
    // // Write a program to find the sum and average of elements in an integer array.
    //
    // int a[] = {3, 5, 7, 2, 1};
    //
    // int uzunluq = sizeof(a) / sizeof(a[0]);
    //
    // int cem = 0;
    //
    // for (int i = 0; i < uzunluq; i++) {
    //     cem = cem + a[i];
    // }
    //
    // float ortalama = (float)cem / uzunluq;
    //
    // printf("%d\n", cem);
    // printf("%.2f\n", ortalama);
    //
    //
    // // Casting
    // printf("%d\n", 3);
    // printf("%.1f\n", (float)3);
    // printf("%d\n", (int)3.7);
    //
    //
    //
    // // Task 2
    // // Count Occurrences
    // // Write a program to count the number of times a specific number occurs in an array.
    //
    // int b[] = {1, 2, 3, 4, 5, 3, 5,3,3};
    //
    // int z = 3;
    //
    // int n = sizeof(b) / sizeof(b[0]);
    // int count = 0;
    //
    // for (int i = 0; i < n; i++) {
    //     if(b[i] == z) {
    //         count++;
    //     }
    // }
    //
    // printf("count %d\n", count);

    // Verilmiş massivin  {4, 2, 3, 1} “bubble sort”-a əsasən neçə yerdəyişmədən (swap) sonra tam sort olmuş (aşağıdan yuxarıya doğru) olacaqdır?
// 1. 2 4 3 1
    // 2. 2 3 4 1
    // 3. 2 3 1 4
    // 4. 2 1 3 4
    // 5. 1 2 3 4


    // int arr[] = {5, 12, 3, 9, 15};
    // int max = arr[0];
    // for (int i = 1; i < 4; i++) {
    //     if (arr[i] > max) {
    //         max = arr[i];
    //     }
    // }
    // printf("%d", max);

    int arr[2][2] = {{4, 6}, {3, 7}};
    printf("%d", arr[1][0]);







    return 0;
}
