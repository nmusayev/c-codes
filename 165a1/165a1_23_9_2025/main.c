#include <stdio.h>

int main(void)
{
    // // insert code here...
    //
    // // line comment
    //
    // /*
    //     multi line comment
    //  */
    //
    // printf("Hello, World2!\n");
    //
    // // new line
    // printf("nadir3\n salam\n");
    //
    // // tab
    // printf("1\t2\t3\n4\t5\t6\n");
    //
    // // quotes
    // printf("\"I like pizza\" will be in quote\n");



    // Variables = allocate space in memory to store a value
    // variable name to access the stored value, we need to declare its type

    // declaration
    int x;

    // initialization
    x = 123;

    // declaration + initialization
    int y = 223;

    printf("x-in qiymeti: %d aaaa\n", x);
    printf("y-in qiymeti: %d bbbb\n", y);

    printf("x ve y-in qiymetleri: %d %d\n", x, y);

    // Cemi print etmek
    printf("x ve y-in cemleri: %d\n", x + y);


    int cem = x + y;
    printf("x ve y-in cemleri: %d\n", cem);







    int age = 27; // integer %d, 4 bytes
    float gpa = 3.25; // floating pointer number %f, 4 bytes, (32 bit of precision) 6-7 digits
    char grade = 'B'; // 1 byte (-128 to +127) or single character - %d or %c
    char name[] = "Nadir"; // array of character [there is no string type in c] %s


    // printing using the format specifier for each type
    printf("Hello, %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);





    return 0;
}
