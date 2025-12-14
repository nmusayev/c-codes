#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Gun{Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7};


void hello(char[], int); //function prototype

int main(void) {
    // random numbers
    // need to importing time library
    //pseudo random numbers = A set of values or elements that is statistically random
    //                        (Don't use these for any sort of cryptographic security)

    // #include <stdlib.h>
    // #include <time.h>
    // Use current time as a seed for random # generator
    srand(time(0));


    // rand() generates a pseudo random # between 0 - 32,767
    int number1 = (rand() % 10) + 21;
    int number2 = (rand() % 10) + 21;
    int number3 = (rand() % 10) + 21;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);


    // hello("BEU", 25);


    // // Enums
    // // enum = a user defined type of named integer identifiers
    //    //               helps to make a program more readable
    //    enum Gun today;
    //    today = Wed;
    //
    //    if(today == Sun || today == Sat) {
    //       printf("\nIt's the weekend! Party time!");
    //    } else {
    //       printf("\nI have to work today :(");
    //    }

    return 0;
}


void hello(char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d years old\n", age);
}
