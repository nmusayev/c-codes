#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>


int global_var = 10;

int increaseValueByOne(int a) {
    a = a + 1;

    printf("global variable in increaseValueByOne: %d\n", global_var);

    // printf("a inside increaseValueByOne() function: %d\n", a);

    return a;
}

int main(void)
{
    // Googling skills
    time_t start_t, end_t;
    double diff_t;

    printf("Starting of the program...\n");
    time(&start_t);

    // Funksiya cagrilanda qiymet koplaylanir ve oturulur
    // Qlobal ve local scope (teritories)
    int a = 1;

    printf("%d\n", a);

    printf("%d\n", increaseValueByOne(a));

    global_var = 11;

    printf("%d\n", increaseValueByOne(a));

    printf("%d\n", a);


    printf("global variable in main: %d\n", global_var);


    // Math library functions
    int b = 25;

    // double sqrt(double);
    printf("get sqrt of %d = %.75lf\n", b, sqrt(26));

    double c = 25.9;

    printf("round c: %lf \n", round(c));

    // ceil - tavan
    // floor - doseme
    printf("ceil c: %lf \n", ceil(c)); // 25.1 -> 26
    printf("floor c: %lf \n", floor(c)); // 25.9 -> 25

    // pow() function
    // float -> %f
    // double -> long float -> %lf
    printf("using pow function: %.0lf", pow(2, 3));

    // printf("Sleeping for 5 seconds...\n");
    // sleep(5);

    // for(int i = 1; i <= 10000000000000000000; i++) {
    //
    // }

    time(&end_t);
    diff_t = difftime(end_t, start_t);

    printf("Execution time = %f\n", diff_t);
    printf("Exiting of the program...\n");

    return 0;
}
