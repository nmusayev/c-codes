#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // float b = 2.5;
    // printf("%.1f\n", b);


    // int a = 5;
    // printf("%d\n", a);
    //
    // a = 10;
    // printf("%d\n", a);
    //
    //
    // // constants
    // const float PI = 3.14159;
    //
    // //PI = 420.69; YOU CAN'T CHANGE THIS
    //
    // printf("%f", PI);


    //     // Arithmetic Operators
    //
    //       // + (addition)
    //       // - (subtraction)
    //       // * (multiplication)
    //       // / (division)
    //       // % (modulus)
    //       // ++ increment
    //       // -- decrement
    //
    //       int x = 5;
    //       int y = 2;
    //
    // printf("%d\n", x + y);
    // printf("%d\n", x - y);
    // printf("%d\n", x * y);
    // printf("%d\n", x / y);
    //
    // printf("%d\n", 7 / 2);
    // printf("%f\n", 7.0 / 2);
    // printf("%f\n", 7 / 2.0);
    //
    // printf("%d\n", 7 % 2);


    // int a = 1;
    // a++; // a = a + 1;
    // printf("%d\n", a);
    //
    // a--; // a = a - 1;
    // printf("%d\n", a);
    //
    // int b = 5;
    //
    // printf("%d\n", b++);
    //
    // printf("%d\n", b);
    //
    //
    // // pre-increment && pre-deriment
    // int c = 7;
    // printf("%d\n", ++c);
    // printf("%d\n", --c);
    //
    // int z = 10;
    //
    // // z = z + 5;
    // z += 5;
    //
    // printf("%d\n", z);

    //    // augmented assignment operators = used to replace a statement where an operator
    //     //                                  takes a variable as one of its arguments
    //     //                                  and then assigns the result back to the same variable
    //     //                                  x = x + 1
    //     //                                  x+=1
    //
    //     int x = 10;
    //
    //     //x = x + 2;
    //     //x+=2;
    //
    //     //x = x - 3;
    //     //x-=3;
    //
    //     //x = x * 4;
    //     //x*=4;
    //
    //     //x = x / 5;
    //     //x/=5;
    //
    //     //x = x % 2;
    //     //x%=2;
    //
    //     printf("%d", x);



    // // Getting input from user
    // int age;
    // printf("Enter your age: ");
    //
    // scanf("%d", &age);
    //
    // age = age * 2;
    //
    // printf("You are %d years old.\n", age);


    // bool netice = 10 > 3;
    // bool netice = 10 < 3;
    // bool netice = (10 > 3) && (3 < 1);
    // bool netice = (10 > 3) || (3 < 1);

    // printf("Netice: %d\n", netice);

    //
    // // If else statement
    // int age = 15;
    //
    // if (age > 18) {
    //     printf("Seckilerde ishtirak ede bilersiz");
    // } else {
    //     printf("Size seckilerde ishtirak etmek ucun yashiniz uygun deyil");
    // }


    // // else if statement
    // int age = 25;
    //
    // if(age < 10) {
    //     printf("You can enter green zone");
    // } else if (age < 20) {
    //     printf("You can enter yellow zone");
    // } else if (age < 30) {
    //     printf("You can enter blue zone");
    // } else {
    //     printf("You can enter red zone");
    // }


    // Istifadecinden tam eded goturun, tek ve ya cut oldugunu deyin
    int a = 10;

    if(a % 2 == 0) {
        printf("eded cutdur");
    } else {
        printf("eded tekdir");
    }


    return 0;
}
