#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // int c = 15;
    //
    // printf("c sizeof(): %d\n", sizeof(c));

    // printf("%d\n", sizeof(a));
    // printf("%d\n", sizeof(a[0]));

    // // Array Reversing -> Tersine = Eksi
    // int a[] = {1, 2, 3};
    // int b[] = {};
    //
    // int n = sizeof(a) / sizeof(a[0]);
    //
    // for (int i = 0; i < n; i++) {
    //     b[i] = a[n - 1 - i];
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     printf("%d\n", b[i]);
    // }



    int array[] = {7, 2, 1, 5, 3};
    // {2, 1, 5, 3, 7}
    // {1, 2, 3, 5, 7}

    // sorting
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size - 1; i++)
    {
        printf("Dover %d\n", i + 1);

        bool yerdeyishmeEdilib = false;
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

                yerdeyishmeEdilib = true;
            }
        }

        if(yerdeyishmeEdilib == false) {
            break;
        }
    }

    // print array
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }



    return 0;
}
