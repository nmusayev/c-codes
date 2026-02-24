#include <stdio.h>

int max(int x, int y) {
    if(x > y) {
        return x;
    }
    return y;
}

int max_of_four(int a, int b, int c, int d) {
    // // version 2
    // if(a > b && a > c && a > d) {
    //     return a;
    // }
    //
    // if(b > a && b > c && b > d) {
    //     return b;
    // }
    //
    // if(c > a && c > b && c > d) {
    //     return c;
    // }
    //
    // return d;


    // version 1
    int max1 = max(a, b);
    int max2 = max(c, d);

    return max(max1, max2);
}

// // main for finding max of four
// int main(void)
// {
//     int a, b, c, d;
//
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//
//     printf("%d\n", max_of_four(a, b, c, d));
//
//     // printf("%d %d %d %d", a, b, c, d);
//
//     return 0;
// }


int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n-2);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}