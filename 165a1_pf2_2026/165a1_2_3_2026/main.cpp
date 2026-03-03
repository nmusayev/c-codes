#include <iostream>
using namespace std;


// // L-FO - Functions Overloading
// int sum(int a, int b) {
//     return a + b;
// }
//
// int sum(int a, int b, int c) {
//     return a + b + c;
// }
//
// float sum(float a, float b) {
//     return a + b;
// }


// L-FT - Function Template
template <class T>
T maxim (T a, T b) {
    return (a > b) ? a : b;
}


// // L-FDA - Function Default Arguments
// int sum(int a, int b, int c = 0) {
//     return a + b + c;
// }

int main()
{
    // // Pointer to the function is also possible
    // int (*pf)(int, int);
    // pf = maxim;
    // (*pf)(10, 20);


    // Global variables -> stored in code section (not in stack or heap), declared outside of functions
    // Local variables -> stored in the stack section
    // Static variables used in fnc -> stored in code section (like global) but only seen to function itself




    // // L-FDA - Function Default Arguments (related sum() function is above)
    // cout << sum(1, 3, 5) << endl;
    // cout << sum(1, 3) << endl;


    // // L-FT - Function Template (maxim() template function is above)
    // cout << maxim(3, 5) << endl;
    // cout << maxim(3.5, 5.5) << endl;
    // cout << maxim(2.1f, 3.7f) << endl;


    // // L-FO - Functions Overloading (call functions with the same name, but different number of arguments, or the same but different type of arguments) (related function is above main() function)
    // int a = 1, b = 2, c = 3;
    // cout << sum(a, b) << endl;
    // cout << sum(a, b, c) << endl;
    // cout << sum(2.7f, 3.1f) << endl;


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
    // // using namespace std
    // string str = "Hello, World!";

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
    // cout << s2 << endl;
    //
    // name.erase(0, 2);
    // cout << "Value: " << name << endl;
    //
    // name.erase();
    // cout << "Value: " << name << endl;


    // // String class, Copy and Find functions
    // string name = "Hello World";
    //
    // char word[100];
    //
    // name.copy(word, name.length());
    // word[name.length()] = '\0';
    // cout << word << endl;
    //
    //
    // int findIndex = name.find("el");
    // cout << findIndex << endl;
    //
    // int findIndex2 = name.find('l');
    // cout << findIndex2 << endl;
    //
    // int findIndex3 = name.rfind('l');
    // cout << findIndex3 << endl;
    //
    // int findIndex4 = name.find_first_of('l');
    // cout << findIndex4 << endl;
    //
    // int findIndex5 = name.find_last_of('l');
    // cout << findIndex5 << endl;
    //
    // string newName = name.substr(6, 5);
    // cout << newName << endl;
    //
    // int res = name.compare(newName); // negative -> first less, positive -> first greater, 0 -> both equal
    // cout << res << endl;


    // // String class, Other functions
    // string name = "Baku Engineering University";
    //
    // char letter = name.at(1);
    // cout << letter << endl;
    //
    // char alternativeWay = name[1]; // [] overloaded operator for string class
    // cout << alternativeWay << endl;
    //
    //
    // char firstLetter = name.front();
    // cout << firstLetter << endl;
    //
    // char lastLetter = name.back();
    // cout << lastLetter << endl;
    //
    //
    // string str1 = "Baku";
    // string str2 = " City";
    // string str3 = str1 + str2; // Operator overloading + (and also =)
    // cout << str3 << endl;
    //
    // string str4 = "Absheron";
    // string str5 = str4; // Operator overloading =
    // cout << str5 << endl;



    // String class. Iterator
    // string name = "Baku City";
    //
    // string::iterator it;
    // for (it = name.begin(); it != name.end(); it++) {
    //     cout << *it << endl;
    // }

    // cout << endl;
    //
    // for(int i = 0; name[i] != '\0'; i++) {
    //     cout << name[i] << endl;
    // }



    return 0;
}
