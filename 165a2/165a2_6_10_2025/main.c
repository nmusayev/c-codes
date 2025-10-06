#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
        // // GET INPUT FROM CONSOLE
        // const int length = 165;
        // int age;
        // char name[length]; // bytes
        //
        // printf("What's full your name? \n");
        // // scanf("%s", name);
        //
        // fgets(name, length, stdin);
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
    // double F = fabs(-100.0);
    // double G = log10(100);
    // double Z = log(2.718281);
    // double H = sin(45);
    // double Y = cos(45);
    // double J = tan(45);
    // printf("result %lf \n", F);
    // printf("result %lf \n", G);
    // printf("result %lf \n", Z);
    // printf("result %lf \n", H);
    // printf("result %lf \n", Y);
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



    // bool a = 5 < 3;
    // // && operator - ve
    // bool b = 5 < 3 && 7 > 2;
    // bool c = 5 > 3 && 7 < 2;
    //
    // // || operator - ve ya
    // bool d = 5 > 3 || 7 > 2;
    //
    // printf("%d\n", a);
    // printf("%d\n", b);
    // printf("%d\n", c);
    // printf("%d\n", d);
    //
    //
    // // ! not - yox
    // bool s = true;
    // s = !s;
    //
    // printf("%d\n", s);
    //
    //
    // bool e = !(5 > 3);
    // printf("e: %d\n", e);



    // int n = 4;
    //
    // bool isEven = n % 2 == 0;
    //
    // if(isEven) {
    //     printf("cut\n");
    // } else {
    //     printf("tek\n");
    // }



    // // IF and ELSE statement
    // int age;
    //
    //  printf("\nEnter your age: ");
    //  scanf("%d", &age);
    //
    //  if(age >= 18){
    //      printf("You are now signed up!");
    //  }
    //  else if(age < 0){
    //      printf("You haven't been born yet!");
    //  }
    //  else{
    //      printf("You are too young to sign up!");
    //  }




    // switch = A more efficient alternative to using many "else if" statements
    //                 allows a value to be tested for equality against many cases
       // char grade;
       //
       // printf("\nEnter a letter grade: ");
       // scanf("%c", &grade);

      char grade = 'B';

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
