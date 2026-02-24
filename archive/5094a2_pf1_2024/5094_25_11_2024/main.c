#include <stdio.h>

int main(void)
{
    // Task1
    // Sum and Average on Array

    int a[] = {3, 5, 7, 2, 1};

    int length = sizeof(a) / sizeof(a[0]);

    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + a[i];
    }

    float average = (float)sum / length;

    printf("%d\n", sum);
    printf("%f\n", average);

    // Casing
    printf("%f\n", (float)2);
    printf("%d\n", (int)2.7);

    printf("---\n");
    int ddddd[3] = {1, 2, 3};
    printf("%d", ddddd[5]);


    return 0;
}
