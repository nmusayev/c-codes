#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main(void) {
        // int age;
        // char name[225]; // bytes
        //
        // printf("What's full your name? \n");
        // // scanf("%s", name);
        // fgets(name, 225, stdin);
        // name[strlen(name) - 1] = '\0';
        //
        // printf("How old are you? \n");
        // scanf("%d", &age);
        //
        // printf("Hello, %s. How are you? \n", name);
        // printf("You are %d years old \n", age);




    // // MATH FUNCTION
    // // include math.h library in the top
    // double A = sqrt(9);
    // double B = pow(2, 4);
    // int C = round(3.14);
    // int D = ceil(3.14);
    // int E = floor(3.74);
    //
    // printf("result %lf \n", A);
    // printf("result %lf \n", B);
    // printf("result %d \n", C);
    // printf("result %d \n", D);
    // printf("result %d \n", E);
    //
    //
    //
    //
    //
    // double F = fabs(-100.0);
    // double G = log10(100);
    // double Z = log(2.718281);
    // double H = sin(45);
    // double I = cos(45);
    // double J = tan(45);
    //
    // printf("result %lf \n", F);
    // printf("result %lf \n", G);
    // printf("result %lf \n", Z);
    // printf("result %lf \n", H);
    // printf("result %lf \n", I);
    // printf("result %lf \n", J);




    // // TASK - cevrenin uzunlugu l = 2 * PI * r   ve cevrenin sahesi s = PI * r * r
    // // hesablamaq, userden input goturerek [user input double]
    // const double PI = 3.14;
    // double l;
    // double s;
    // double r;
    //
    // printf("please enter radius: ");
    // scanf("%lf", &r);
    //
    // l = 2 * PI * r;
    // s = PI * r * r;
    //
    // printf("l = %lf \n", l);
    // printf("s = %lf \n", s);



    // // TASK - duzbucaqli ucbucaqin hipetonozunu tapmaq, user input = sides except hipetonoz
    // double A;
    // double B;
    // double C;
    //
    // printf("please enter side A: ");
    // scanf("%lf", &A);
    //
    // printf("please enter side B: ");
    // scanf("%lf", &B);
    //
    // C = sqrt(pow(A, 2) + pow(B, 2));
    // printf("C side length is equel to %lf \n", C);



    // bool a = true;
    // bool b = false;
    // bool c = 5 > 3;
    // bool d = 5 < 3;
    //
    // printf("a = %d\n", a);
    // printf("b = %d\n", b);
    // printf("c = %d\n", c);
    // printf("d = %d\n", d);
    //
    //
    // bool e = (5 > 2) && (7 > 4);
    // bool f = (5 > 9) && (7 > 4);
    //
    // printf("e = %d\n", e);
    // printf("f = %d\n", f);
    //
    //
    // bool g = (5 > 3) || (7 < 4);
    // printf("g = %d\n", g);
    //
    //
    // bool h = true;
    // h = !h;
    // printf("h = %d\n", h);
    //
    // bool i = !(5 > 3);
    // printf("i = %d\n", i);



    // int age;
    // scanf("%d",&age);
    //
    // if(age > 18) {
    //     printf("Yasil qapi");
    // } else {
    //     printf("Sari qapi");
    // }


    // int age;
    // scanf("%d",&age);
    //
    // if(age > 18) {
    //     printf("Yasil qapi");
    // } else if(age > 0) {
    //     printf("Sari qapi");
    // } else {
    //     printf("Dogru yash daxil edin");
    // }



    // switch = A more efficient alternative to using many "else if" statements
    //                 allows a value to be tested for equality against many cases
       char grade;

       printf("\nEnter a letter grade: ");
       scanf("%c", &grade);

       switch(grade){
          case 'A':
             printf("perfect!\n");
             break;
          case 'B':
             printf("You did good!\n");
             break;
          default:
             printf("Please enter only valid grades");
       }





    return 0;
}
