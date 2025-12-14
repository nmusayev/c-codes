#include <stdio.h>
#include <time.h>
#include <stdlib.h>



// enum Day{Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7};

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
    int number1 = (rand() % 6) + 1;

    printf("%d\n", number1);



// enum Day today = Sun;
//
// if(today == Sat || today == Sun) {
//     printf("It's weekend");
// } else {
//     printf("It's work day");
// }


// Old and not understandable code
// int today = 1;
//
// if(today == 6 || today == 7) {
//     printf("It's weekend");
// } else {
//     printf("It's week day");
// }


    hello("BEU", 5);



    return 0;
}


void hello(char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d years old\n", age);
}