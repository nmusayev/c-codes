#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    // int age = 27; // integer %d, 4 bytes
    // float gpa = 3.25; // floating pointer number %f, 4 bytes, (32 bit of precision) 6-7 digits
    // char grade = 'B'; // 1 byte (-128 to +127) or single character - %d or %c
    // char name[] = "Nadir"; // array of character [there is no string type in c] %s
    //
    // // printing using the format specifier for each type
    // printf("Hello, %s\n", name);
    // printf("You are %d years old\n", age);
    // printf("Your average grade is %c\n", grade);
    // printf("Your gpa is %f\n", gpa);


        // // DATA TYPES in C
        // char a = 'C';                   // single character    %c
        // char b[] = "Bro";            // array of characters %s
        //
        // float c = 3.141592;                          // 4 bytes (32 bits of precision) 6 - 7 digits %f
        // double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf
        //
        // bool e = true;                         // 1 byte (true or false) %d
        //
        // char f = 120;                          // 1 byte (-128 to +127) %d or %c
        // unsigned char g = 255;       // 1 byte (0 to +255) %d or %c
        //
        // short h = 32767;                   // 2 bytes (−32,768 to +32,767) %d
        // unsigned short i = 65535;  // 2 bytes (0 to +65,535) %d
        //
        // int j = 2147483647;                     // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
        // unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u
        //
        // long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
        // unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu
        //
        // printf("%c\n", a);  // char
        // printf("%s\n", b);  // character array
        // printf("%f\n", c);  // float
        // printf("%lf\n", d); // double
        // printf("%d\n", e);  // bool
        // printf("%d\n", f);  // char as numeric value
        // printf("%d\n", g);  // unsigned char as numeric value
        // printf("%d\n", h);  // short
        // printf("%d\n", i);  // unsigned short
        // printf("%d\n", j);  // int
        // printf("%u\n", k);  // unsigned int
        // printf("%lld\n", l);  // long long int
        // printf("%llu\n", m);  // unsigned long long int



    // // FORMAT SPECIFIER % = defines and formats a type of data to be displayed
    //
    // // %c = character
    // // %s = string (array of characters)
    // // %f = float
    // // %lf = double
    // // %d = integer
    //
    // // %.1 = decimal precision
    // // %1 = minimum field width
    // // %- = left align
    //
    // float item1 = 5.75;
    // float item2 = 10.00;
    // float item3 = 100.99;
    //
    // printf("Item 1: $%8.2f\n", item1);
    // printf("Item 2: $%8.2f\n", item2);
    // printf("Item 3: $%8.2f\n", item3);



    // float item1 = 5.75;
    // printf("Item 1: $%6.2f\n", item1);


    // // CONSTANTS
    // // constant = fixed value that cannot be altered by the program during its execution
    //
    // const float PI = 3.14159;
    //
    // PI = 420.69; YOU CAN'T CHANGE THIS
    //
    // printf("%f", PI);




        // Arithmetic Operators

          // + (addition)
          // - (subtraction)
          // * (multiplication)
          // / (division)
          // % (modulus)
          // ++ increment
          // -- decrement

          // int x = 5;
          // int y = 2;

    //       int z = x + y;
          // int z = x - y;
          // int z = x * y;
          // float z = x / (float) y;
          // int z = x % y;
    // x++;
          // y--;

        // 5239 1517 1650 7952

    //      printf("%d \n", x);
    //      printf("%d \n", y);
    //      printf("%f \n", (float) (5/2));



    // int a = 5;
    // a++; // a = a + 1;
    // printf("%d\n", a);
    // a--; // a = a - 1;
    // printf("%d\n", a);
    //
    // int b = 10;
    // printf("%d\n", b++);
    // printf("%d\n", b);
    //
    // int c = 20;
    // printf("%d\n", ++c);


    // // division
    // int x = 5;
    // int y = 2;
    //
    // float z = x / y;
    // printf("%f\n", z);
    //
    // float c = x * 1.0 / y;
    // printf("%f\n", c);
    //
    // float r = x / (float) y;
    // printf("%f\n", r);


    // // augmented assignment operators = used to replace a statement where an operator
    //  //                                  takes a variable as one of its arguments
    //  //                                  and then assigns the result back to the same variable
    //  //                                  x = x + 1
    //  //                                  x+=1
    //
    //  int x = 10;
    //
    //  //x = x + 2;
    //  //x+=2;
    //
    //  //x = x - 3;
    //  //x-=3;
    //
    //  //x = x * 4;
    //  //x*=4;
    //
    //  //x = x / 5;
    //  //x/=5;
    //
    //  //x = x % 2;
    //  //x%=2;
    //
    //  printf("%d", x);



    //    // GET INPUT FROM CONSOLE
    //    int age;
    //    char name[25]; // bytes
    //
    //    printf("What's your name? \n");
    //
    ////    scanf("%s", name);
    //    fgets(name, 25, stdin);
    //    name[strlen(name) - 1] = '\0';
    //
    //    printf("How old are you? \n");
    //
    //    scanf("%d", &age);
    //
    //    printf("Hello, %s. How are you? \n", name);
    //    printf("You are %d years old \n", age);




    // Input from user
    printf("Zehmet olmasa bir eded daxil edin: \n");

    int n;

    scanf("%d", &n);

    printf("Sizinin daxil etdiyiniz eded %d qiymetidir", n);

    // printf("%p\n", &n);





    return 0;
}
