#include <stdio.h>

int main(void)
{
    // Reverse the Array
    int a[] = {1, 2, 3};

    int b[] = {};

    int uzunluq = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < uzunluq; i++) {
        b[i] = a[uzunluq - 1 - i];

        // printf("%d\n", b[i]);
    }

    for (int i = 0; i < uzunluq; i++) {
        printf("%d\n", b[i]);
    }




    return 0;
}
