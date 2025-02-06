#include <stdio.h>


// // bubble sort
// void sort(char array[], int size)
// {
//     for(int i = 0; i < size - 1; i++)
//     {
//         for(int j = 0; j < size - i - 1; j++)
//         {
//             if(array[j] > array[j+1])
//             {
//                 int temp = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = temp;
//             }
//         }
//     }
// }

void printHelloWorld3Times() {
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
}

void printNameAndAge(char name[], int age) {
    printf("Salam, menim adim %s\n", name);
    printf("Menim %d yashim var\n", age);
}

double ortalama(int a, int b) {
    double netice = (a + b) / 2.0;
    return netice;
}

int kvadrat(int a) {
    int netice = a * a;
    return netice;
}

int main(void)
{
    printf("%d\n", kvadrat(5));
    printf("%d\n", kvadrat(15));
    printf("%d\n", kvadrat(25));

    printf("%.0lf\n", ortalama(5, 15));


    // // Funksiya. Arguments
    // printNameAndAge("Adil", 23);
    // printNameAndAge("Ezim", 25);
    // printNameAndAge("Melek", 20);
    // printNameAndAge("Kerim", 26);

    // printf("Salam, Menim adim Adil\n");
    // printf("Menim 23 yashim var\n");
    //
    // printf("Salam. Menim adim Ezim\n");
    // printf("Menim 25 yashim var\n");
    //
    // printf("Salam. Menim adim Melek\n");
    // printf("Menim 20 yashim var\n");
    //
    // printf("Salam. Menim adim Kerim\n");
    // printf("Menim 26 yashim var\n");

    // Funksiya
    // printHelloWorld3Times();
    // printHelloWorld3Times();
    // printHelloWorld3Times();


    // int a = 5;
    // int b = 10;
    //
    // // Swap - Yerdeyishme
    // int temp = a;
    // a = b;
    // b = temp;
    //
    // printf("a = %d\n", a);
    // printf("b = %d", b);






    return 0;
}
