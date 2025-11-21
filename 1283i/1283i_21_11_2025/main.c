#include <stdio.h>

void birthday() {
    printf("Happy Birth to you!\n");
    printf("Happy Birth to you!\n");
    printf("Happy Birth dear ....!\n");
    printf("Happy Birth to you!\n");
}

void birthday2(char personName[]) {
    printf("Happy Birth to you!\n");
    printf("Happy Birth to you!\n");
    printf("Happy Birth dear %s!\n", personName);
    printf("Happy Birth to you!\n");
}

int findSquare(int n) {
    int result = n * n;

    return result;
}

int findSquareOfSum(int a, int b) {
    int sum = a + b;
    // int result = sum * sum;
    int result = findSquare(sum);
    return result;
}

int birthday3(char name[], int age) {
    printf("Happy birthday dear %s\n", name);
    printf("You are %d years old\n", age);
}

int main(void) {
    // Function
    birthday3("Ali", 21);
    birthday3("Moiz", 22);
    birthday3("Omer", 23);





    // int answer = findSquareOfSum(3, 5);
    // printf("Answer: %d\n", answer);



    // int answer = findSquare(5);
    // printf("%d\n", answer);





    // birthday2("Mirali");
    // birthday2("Ali");

    // birthday();
    // birthday();
    // birthday();

    return 0;
}
