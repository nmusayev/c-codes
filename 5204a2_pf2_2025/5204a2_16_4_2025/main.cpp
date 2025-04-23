#include <iostream>
class Your;
using namespace std;

// // L-1 Friend Functions
// class Test {
//     private:
//         int a;
//     protected:
//         int b;
//     public:
//         int c;
//
//     // does not belong to class, but friend to the class
//     // (can access all private, protected, public members)
//     friend void fun();
// };
//
// void fun() {
//     Test t;
//     t.a = 15;
//     t.b = 18;
//     t.c = 20;
//
//     cout << t.a << " " << t.b << " " << t.c << endl;
// }




// // L-2 Friend Classes
// class My {
//     private:
//         int a;
//
//     friend Your;
// };
//
// class Your {
// public:
//     My m;
//
//     void fun() {
//         m.a = 15;
//         cout << m.a << endl;
//     }
// };


// L-3 Static Members
class Test {
private:
    int a = 3;
    int b = 2;

public:
    static int count;

    Test() {
        a = 10;
        b = 15;
        count++;
    }

    int sum() {
        return a + b;
    }

    int getCount2() {
        return count;
    }

    static int getCount() {
        return count;
    }
};

// You must provide a definition for the static member outside the class
int Test::count = 0;



int main()
{
    Test::getCount();
    // // L-1 Friend Functions
    // // If we use to get class private and protected members in the function
    // // which is outside the class, we need to make that function friend
    // // function inside class with "friend" keyword
    // fun();



    // // L-2 Friend Classes
    // // If we want to get private, protected members of another class
    // // inside our class, we need to make our class friend in the
    // // accessing class
    // Your y;
    // y.fun();


    // L-3 Static Members
    // Does not belong to object. Belongs to Class
    // Occupy memory once. shared across objects
    // Note: using scope resolution must be declared outside function
    Test test1;
    Test test2;

    cout << test1.count << endl;
    cout << test2.count << endl;
    cout << Test::count << endl;

    test1.count = 15;
    cout << test2.count << endl;

    // Static member function can only access static members of class (not non-static members) (static)
    // (because a static function does not operate in the context of any particular instance of the class)
    Test test3;
    cout << test3.getCount() << endl;
    cout << Test::getCount() << endl;

    // Static Member useful:
    // 1. as counter (student admission number and static counter)
    // 2. shared memory. write/read
    // 3. info about class. e.x. car price



    return 0;
}
