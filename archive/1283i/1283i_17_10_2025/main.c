#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
        // // GET INPUT FROM CONSOLE
        // char name[25]; // bytes
        // printf("What's your name? \n");
        //
        // scanf("%s", name);
        // // fgets(name, 25, stdin);
        // // name[strlen(name) - 1] = '\0';
        //
        // printf("Hello, %s. How are you? \n", name);




        // // MATH FUNCTION
        // // #include <math.h>
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



        // int n = 8;
        //
        // if(n % 2 == 0) {
        //         printf("Even\n");
        // } else {
        //         printf("Odd\n");
        // }



        // int a = 0;
        //
        // if(a > 0) {
        //         printf("Positive\n");
        // } else if(a < 0) {
        //         printf("Negative\n");
        // } else {
        //         printf("Zero\n");
        // }




        // switch = A more efficient alternative to using many "else if" statements
        //                 allows a value to be tested for equality against many cases

           // char grade;
           //
           // printf("\nEnter a letter grade: ");
           // scanf("%c", &grade);

         // char grade = 'C';
         //
         //   switch(grade){
         //      case 'A':
         //         printf("perfect!\n");
         //         break;
         //      case 'B':
         //         printf("You did good!\n");
         //         break;
         //      default:
         //         printf("Please enter only valid grades");
         //   }



    // // && Logical operator
    // // #include <stdbool.h>
    // // logical operators = && (AND) checks if two or more conditions are true
    //     float temp = 25;
    //     bool sunny = true;
    //
    //     if(temp >= 0 && temp <= 30 && sunny){
    //         printf("The weather is good!\n");
    //     } else{
    //         printf("The weather is bad!\n");
    //     }



    // // || operator
    // // logical operators = || (OR) checks if at least one codition is true
    //
    //  float temp = 25;
    //
    //  if(temp <= 0 || temp >= 30){
    //      printf("\nThe weather is bad!");
    //  }
    //  else{
    //      printf("\nThe weather is good!");
    //  }



    // // logical operators = ! (NOT) reverses the state of a condition
    // bool sunny = true;
    //
    // if(!sunny){
    //     printf("Gunesli");
    // } else{
    //     printf("Buludlu");
    // }



    // for (int i = 1; i <= 500; i++) {
    //     printf("%d hello world\n", i);
    // }


    // while loop = repeats a section of code possibly unlimited times.
       // WHILE some condition remains true
       // a while loop might not execute at all
       char name[25];

       printf("\nWhat's your name?: ");
       fgets(name, 25, stdin);
       name[strlen(name) - 1] = '\0';

       while(strlen(name) == 0) {
          printf("\nYou did not enter your name");
          printf("\nWhat's your name?: ");
          fgets(name, 25, stdin);
          name[strlen(name) - 1] = '\0';
       }

       printf("Hello %s", name);



}
