#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // const double PI = 3.14;


    //
    // int x = 10;
    //
    // int qaliq = x % 3;
    // // comment
    // int tam = x / 3;
    //
    // printf("qaliq %d\n", qaliq);
    // printf("tam %d\n", tam);

    // printf("daha deqiq %f \n", 10 / 3.0);

    // printf("%d\n", x);


    // Getting user input
    // Tapshirig: reqemi input edin, 1 vahid artirib, 3-e qaligini
    // tapin
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("You entered %d\n", a);

    // char a = 'A';
    // char b[] = "AbcdeEDF";
    // char c[] = {'A', 'b', 'c', 'd'};

    // char name[100];
    //
    // printf("Enter your name: ");
    // scanf("%s", name);
    //
    // printf("Hello, %s!\n", name);


    // char name[] = "John";
    // int length = strlen(name);
    //
    // printf("length: %d\n", length);
    // printf("last character: %c\n", name[length-1]);

    // uzunlugu character l
    // l - 1


    // printf("%c %c\n", );



    //    // MATH FUNCTION
    // include math.h library in the top
    double A = sqrt(9); // kokalti
    double B = pow(5, 10);

    // printf("%d\n", 2 * 2 * 2 * 2);

    int C = round(3.14);
    int D = ceil(3.14);
    int E = floor(3.14);
    double F = fabs(-100.0);  // module
    // double G = log10(100);
    // double Z = log(2.718281);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("result %lf \n", A);
    printf("result %lf \n", B);
    printf("result %d \n", C);
    printf("result %d \n", D);
    printf("result %d \n", E);
    printf("result %lf \n", F);
    // printf("result %lf \n", G);
    // printf("result %lf \n", Z);
    printf("result %lf \n", H);
    printf("result %lf \n", I);
    printf("result %lf \n", J);



    return 0;
}
