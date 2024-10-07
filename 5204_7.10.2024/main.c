#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   // char grade = 'C';
   //
   //  if (grade == 'A') {
   //      printf("Ela");
   //  } else if (grade == 'B') {
   //      printf("Orta");
   //  } else if (grade == 'C') {
   //      printf("Kafi");
   //  } else if (grade == 'D') {
   //      printf("Ashagi");
   //  } else if( grade == 'F') {
   //      printf("Kesr qiymeti");
   //  } else {
   //      printf("Qiymetin melum deyil");
   //  }
   //
   //  switch (grade) {
   //      case 'A':
   //          printf("A");
   //          break;
   //      case 'B':
   //          printf("B");
   //          break;
   //      case 'C':
   //          printf("C");
   //          break;
   //      case 'D':
   //          printf("D");
   //          break;
   //      case 'F':
   //          printf("F");
   //          break;
   //      default:
   //          printf("namelum");
   //          break;
   //  }




    // // switch = A more efficient alternative to using many "else if" statements
    // //                 allows a value to be tested for equality against many cases
    //
    //    char grade;
    //
    //    printf("\nEnter a letter grade: ");
    //    scanf("%c", &grade);
    //
    //    switch(grade){
    //       case 'A':
    //          printf("perfect!\n");
    //          break;
    //       case 'B':
    //          printf("You did good!\n");
    //          break;
    //       case 'C':
    //          printf("You did okay!\n");
    //          break;
    //       case 'D':
    //          printf("At least it's not an F!\n");
    //          break;
    //       case 'F':
    //          printf("YOU FAILED!\n");
    //          break;
    //       default:
    //          printf("Please enter only valid grades");
    //    }
    //


    // a > b
    // a < b
    // a == b
    // a <= b
    // a >= b

    // char havaVeziyyeti[10] = "Yagisli";
    // char havaVeziyyeti[] = "Buludlu";

    // || - or - ve ya
    // && - and - ve

    // bool havaYagisli = false;
    // bool havaBuludlu = true;

    // if(havaYagisli || havaBuludlu) {
    //     printf("Cetir gotur");
    // }

    // printf("%d\n", havaYagisli);

    // if(havaYagisli) {
    //     printf("Cetir gotur");
    // }
    //
    // if(havaBuludlu) {
    //     printf("Cetir gotur");
    // }

    // bool netice = (5 == 5);
    // if(netice) {
    //
    // }

    // // not operator - !
    // bool dersGunu = false;
    //
    // if(dersGunu) {
    //     printf("Derse get\n");
    // }
    //
    // if(!dersGunu) {
    //     printf("Istirahet gunu\n");
    // }




    // int havaTemeraturBaki = 35;
    // int havaTemeraturGence = 32;
    //
    // if(havaTemeraturBaki > 30 && havaTemeraturGence > 30) {
    //     printf("Her iki seherde hava istidir\n");
    // }


    // int a = 10;
    // int b = 20;
    // int c = 30;
    //
    // if(a > b && a > c) {
    //     printf("a\n");
    // } else if(b > c) {
    //     printf("b\n");
    // } else {
    //     printf("c\n");
    // }


    // int a = 10;
    // int b = 20;

    // if(a > b) {
    //     printf("a > b\n");
    // } else {
    //     printf("a > b\n");
    // }

    // // ternary operator
    // (a > b) ? printf("a > b\n") : printf("a > b\n");


    // printf("1\n");
    // printf("2\n");
    // printf("3\n");
    // printf("4\n");
    // printf("5\n");
    //
    // for(int i = 1; i <= 15; i++) {
    //     // if(i != 13) {
    //     //     printf("%d\n", i);
    //     // }
    //
    //     if(i == 13) {
    //         continue;
    //     }
    //
    //     printf("%d\n", i);
    // }


    int sum = 0;

    for(int i = 1; i <= 1000; i++) {
        sum = sum + i;
    }

    printf("%d\n", sum);



    return 0;
}
