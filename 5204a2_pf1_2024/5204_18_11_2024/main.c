#include <stdio.h>

int global_var = 10;

int increaseValueByOne(int a) {
    a = a + 1 + global_var;

    return a;
}

int main(void)
{
    // Funksiyaya qiymet oturulende, deyer koplyalanir
    int a = 5;

    printf("%d\n", a);

    printf("%d\n", increaseValueByOne(a));

    printf("%d\n", a);


    // Global variable usage
    global_var = 11;
    printf("%d\n", global_var);

    printf("%d\n", increaseValueByOne(a));

    return 0;
}
