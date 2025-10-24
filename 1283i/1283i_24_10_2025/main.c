#include <stdio.h>

int main(void) {
     // // while loop = checks a condition, THEN executes a block of code if condition is true
     // // do while loop = always executes a block of code once, THEN checks a condition
     // int number = 0;
     // int sum = 0;
     //
     // do{
     //    printf("Enter a # above 0: ");
     //    scanf("%d", &number);
     //    if(number > 0) {
     //       sum += number;
     //    }
     // } while(number > 0);
     //
     // printf("sum: %d", sum);


    // for(int i = 1; i <= 20; i++) {
    //     if(i == 14) {
    //         break;
    //     }
    //
    //     printf("%d ", i);
    // }
    //
    // printf("finished");



    // for(int i = 1; i <= 20; i++) {
    //     if(i == 13) {
    //         continue;
    //     }
    //
    //     printf("%d ", i);
    // }
    //
    // printf("finished");


    for(int j = 1; j <= 3; j++) {
        for(int i = 1; i <= 5; i++) {
            printf("*");
        }
        printf("\n");
    }


    return 1;
}
