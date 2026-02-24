#include <iostream>
#include <fstream>
using namespace std;


// // L-1 Namespaces
// namespace First {
//     void fun() {
//         cout << "First" << endl;
//     }
// }
//
// namespace Second {
//     void fun() {
//         cout << "Second" << endl;
//     }
// }
//
// using namespace First;

int main()
{
    // fun();
    // // L-1 Namespaces
    // // Removes ambiguity
    // First::fun(); // if using keywork used above, no need to use First
    // Second::fun();

    // L2 - Destructors and Virtual Destructors (inheritance)
    // Destructors called at the end of object life (purpose to release resources)
    // Virtual destructors used to call inherited constructor also if pointer use that type (Base *p = new Derived(); delete p;)



    // L2 - Destructors and Virtual Destructors (inheritance)
    // Destructors called at the end of object life (purpose to release resources)
    // Virtual destructors used to call inherited constructor also if pointer use that type (Base *p = new Derived(); delete p;)

    // Week 10-12 (File Read&Write)
    // L3 - Streams (Writing to the file)
    // Stream is a flow of data (progra to external source or vice verca)
    // using mechanism of I/O
    // ios -> istream, ostream
    // for file -> ifstream, ofstream
    // cout and cin are also streams (pipes)
    ofstream outfile("my.txt", ios::trunc); // fstream lib should be included
    // modes app - append, trunc - truncate. by default truncate ios:trunc taken
    // onlinegdb.com
    outfile << "Hello" << endl;
    outfile << 25 << endl;

    // closing the stream. it is important. need to release the resource
    outfile.close();


    return 0;
}
