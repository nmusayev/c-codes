#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //     // TASK - get use input. Celcies or Faranhites and convert to another. Handle wrong input by showing ////that input is not
    //     char unit;
    //     float temp;
    //
    //     printf("\nIs the temperature in (F) or (C)?: ");
    //     scanf("%c", &unit);
    //
    // // to use toupper function need to import ctype.h library on top
    //     unit = toupper(unit);
    //
    //     if(unit == 'C'){
    //         printf("\nEnter the temp in Celsius: ");
    //         scanf("%f", &temp);
    //         temp = (temp * 9 / 5) + 32;
    //         printf("\nThe temp in Farenheit is: %.2f", temp);
    //     }
    //     else if(unit == 'F'){
    //         printf("\nEnter the temp in Farenheit: ");
    //         scanf("%f", &temp);
    //         temp = ((temp - 32) * 5) / 9;
    //         printf("\nThe temp in Celsius is: %.1f", temp);
    //     }
    //     else{
    //         printf("\n %c is not a valid unit of measurement", unit);
    //     }


    // // TASK - get use input. Celcies or Faranhites and convert to another. Handle wrong input by showing ////that input is not
    // char unit;
    // float temp;
    //
    // printf("\nIs the temperature in (F) or (C)?: ");
    // scanf("%c", &unit);
    //
    // if(unit == 'C') {
    //     printf("\nEnter the temp in Celsius: ");
    //     scanf("%f", &temp);
    //     printf("\nThe temp in Celsius is: %.1f %c", temp, unit);
    // } else if(unit == 'F') {
    //     printf("\nEnter the temp in Farenheit: ");
    //     scanf("%f", &temp);
    //     printf("\nThe temp in Farenheit is: %.1f %c", temp, unit);
    // } else {
    //     printf("\n %c is not a valid unit of measurement", unit);
    // }




    // // && Logical operator
    // // logical operators = && (AND) checks if two or more conditions are true
    //
    // float temp = 25;
    // bool sunny = true;
    //
    // if(temp >= 0 && temp <= 30 && sunny){
    //     printf("\nThe weather is good!");
    // }
    // else{
    //     printf("\nThe weather is bad!");
    // }



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
    //
    // bool sunny = true;
    //
    // if(!sunny){
    //     printf("\nIt's cloudy outside!");
    // }
    // else{
    //     printf("\nIt's sunny outside!");
    // }



    // int a = 5;
    // printf("%d\n", a); // 5
    //
    // a = a + 1;
    // printf("%d\n", a); // 6
    //
    // a++; // a = a + 1;
    // printf("%d\n", a); // 7
    //
    // printf("%d\n", a++); // 7
    // printf("%d\n", a); // 8
    //
    // printf("%d\n", ++a); // 9
    //
    // // a--
    // // --a





    // for(int i = 1; i <= 1000; i++) {
    //     printf("%d Hello World\n", i);
    // }


    // while loop = repeats a section of code possibly unlimited times.
       // WHILE some condition remains true
       // a while loop might not execute at all
       char name[25];

       printf("\nWhat's your name?: ");
       fgets(name, 25, stdin);
       // name[strlen(name) - 1] = '\0';

        int length = strlen(name);
    printf("%c %c %c %c", name[0], name[1], name[2], name[3]);
    // printf("length: %d", length);

       // while(strlen(name) == 0) {
       //    printf("\nYou did not enter your name");
       //    printf("\nWhat's your name?: ");
       //    fgets(name, 25, stdin);
       //    name[strlen(name) - 1] = '\0';
       // }

       printf("Hello %s", name);








    return 0;
}
