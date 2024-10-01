#include <stdio.h>
#include <math.h>

int main(void)
{
    // Sinif Tapshirigi:
    // 1. istifadeciye "Bir tam eded daxil edin" yazisi cixarin
    // 2. ededi istifadeciden qebul edin
    // 3. ededi qebul etdikden sonra 1 vahid ededi artirin
    // 4. ededin 3-e bolunmesinden alinan qaligi istifadeciye
    // print ederek gosterin


    // printf("Xaish edirem, bir eded daxil edin ");
    // int a;
    // scanf("%d", &a);
    // printf("Daxil etdiyiniz eded: %d\n", a);


    // printf("Xaish edirem, adinizi daxil edin ");
    //
    // char name[200];
    // scanf("%s", name);
    //
    // printf("Sizin adiniz: %s\n", name);


    // printf("%d\n", 2);



    // MATH FUNCTION
    // include math.h library in the top
    // double A = sqrt(9);
    // double B = pow(2, 4);
    // int C = round(3.14);
    // int D = ceil(3.14);
    // int E = floor(3.94);
    // double F = fabs(-100.0);
    // double G = log10(100);
    // double Z = log(2.718281);
    // double H = sin(45);
    // double I = cos(45);
    // double J = tan(45);
    //
    // printf("result %lf \n", A);
    // printf("result %lf \n", B);
    // printf("result %d \n", C);
    // printf("result %d \n", D);
    // printf("result %d \n", E);
    // printf("result %lf \n", F);
    // printf("result %lf \n", G);
    // printf("result %lf \n", Z);
    // printf("result %lf \n", H);
    // printf("result %lf \n", I);
    // printf("result %lf \n", J);


    // if else
    // shert

    // int a = 3;
    //
    // if(a > 3) {
    //     printf("a ededi 3-den boyukdur");
    // } else {
    //     printf("a ededi 3-e beraber ve ya 3-den kicikdir");
    // }

    // a > b
    // a < b
    // a >= b
    // a <= b
    // a == b
    // a == 5
    // a != b

    int grade = 90;

    if(grade != 90) {
        printf("90-a beraber deyil\n");
    } else {
        printf("90-a beraber\n");
    }

    int x = 5;
    int y = 10;

    // !(x > y) ===> x <= y

    if(!(x > y)) {
        printf("x y-den boyuk deyil\n");
    }

    if(grade >= 90) {
        printf("A");
    } else if (grade > 80) {
        printf("B");
    } else if (grade > 70) {
        printf("C");
    } else {
        printf("F");
    }

    return 0;
}
