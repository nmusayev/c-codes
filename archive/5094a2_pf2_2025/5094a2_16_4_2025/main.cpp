#include <iostream>
using namespace std;

// L-3 Static Members
class Test {
private:
    int a, b;
public:
    static int count;

    Test() {
        a = 10;
        b = 15;
        count++;
    }

    static int getCount() {
        return count;
    }
};
// You must provide a definition for the static member outside the class
int Test::count = 0;




int main()
{
    // L-3 Static Members
    // Does not belong to object. Belongs to Class
    // Occupy memory once. shared across objects
    // Note: using scope resolution must be declared outside function
    Test test1; // count -> 1
    Test test2; // count -> 2

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

// class Test
// static count = 2

// t1 object
// a, b

// t2 object
// a, b

// main
// t1.count, t2.count, Test::count