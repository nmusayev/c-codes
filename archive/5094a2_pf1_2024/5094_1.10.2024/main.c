#include <stdio.h>

int main(void)
{
    int a = 5;

    // comparison
    // a > b
    // a >= b
    // a <= b
    // a < b
    // a == b
    // a != b

    // if(a == 5) {
    //     printf("a-nin qiymeti 5-dir\n");
    // } else {
    //     printf("a-nin qiymeti 5-den ferqlidir");
    // }



    if(a != 5) {
        printf("a-nin qiymeti 5-den ferqlidir");
    } else {
        printf("a-nin qiymeti 5-dir\n");
    }


    // if else if
    int grade = 76;

    if(grade >= 90) {
        printf("A");
    } else if(grade >= 80) {
        printf("B");
    } else if(grade >= 70) {
        printf("C");
    } else if(grade >= 60) {
        printf("D");
    } else if(grade >= 50) {
        printf("E");
    } else {
        printf("F");
    }

    return 0;
}
