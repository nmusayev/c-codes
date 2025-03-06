#include <iostream>
#include <string>

using namespace std;

void inc1(int a) {
    a = a + 1;
}

void inc2(int *c) {
    *c = *c + 1;
}

void inc3(int &d) {
    d = d + 1;
}

int main()
{
    // // Kopyalama
    // int a = 5;
    // int b = a;
    //
    // b++;
    // cout << a << endl;
    //
    // inc1(a);
    // cout << a << endl;


    // Pointer
    // int a = 5;
    // int *b = &a;
    //
    // *b = *b + 1;
    //
    // cout << a << endl;

    // int a = 5;
    // inc2(&a);
    //
    // cout << a << endl;

    // // Referencing - instinad
    // int x = 5;
    // int &y = x;
    //
    // y++;
    //
    // cout << x << endl;

    // int z = 15;
    // inc3(z);
    //
    // cout << z << endl;



    // // String
    // // 1. Using char Array
    // char name[] = "John"; // {'J', 'o', 'h', 'n', '/0'}
    // std::cout << sizeof(name)/sizeof(name[0]) << std::endl;
    //
    // // getting string input from console
    // char s[50];
    // std::cout << "Enter your name: ";
    // std::cin.getline(s, 50); // Also, cin.get(s, 50) function, but needs to use cin.ignore() before read of second time user input, because takes enter to second string input
    // std::cout << "Welcome, " << s << std::endl;
    //
    // // Function: strlen(str), strcat(str_dest, str_src), strncat(str_dest, str_src, n)
    // // strcpy(str_dest, str_src), strncpy(str_dest, str_src, n), strstr(main, sub) -> return remaining all if found
    // // strcmp(str1, str2) -> positive = first grater, negative = second greater, 0 = both equal



    // // String
    // // 2. Using string class
    // // #include <string> library
    // string str = "Hello, World!";
    //
    // // Basic Functions
    // cout << "Value: " << str << endl;
    // std::cout << str.length() << std::endl;
    // std::cout << str.size() << std::endl;
    // std::cout << str.capacity() << std::endl;
    // str.resize(30);
    // std::cout << str.capacity() << std::endl;
    // std::cout << str.max_size() << std::endl;
    // std::cout << str.empty() << std::endl;
    //
    // str.clear();
    // std::cout << str.empty() << std::endl;
    // std::cout << str.length() << std::endl;
    // cout << "Value: " << str << endl;



    // // String class, Append and Insert functions
    // string name = "Hello";
    //
    // name.append(" World");
    // cout << name << endl;
    //
    // name.insert(2, "AAA");
    // cout << name << endl;
    //
    // name.replace(9, 2, "ZZ");
    // cout << name << endl;
    //
    // name.push_back('T');
    // cout << name << endl;
    //
    // name.pop_back();
    // cout << name << endl;
    //
    // string s2 = "BEU";
    // name.swap(s2);
    // cout << name << endl;
    //
    // name.erase(0, 2);
    // cout << "Value: " << name << endl;
    //
    // name.erase();
    // cout << "Value: " << name << endl;




    return 0;
}
