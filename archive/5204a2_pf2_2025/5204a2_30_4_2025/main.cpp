#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Week 10-12 (File Read&Write)
    // L3 - Streams (Writing to the file)
    // Stream is a flow of data (progra to external source or vice verca)
    // using mechanism of I/O
    // ios -> istream, ostream
    // for file -> ifstream, ofstream
    // cout and cin are also streams (pipes)
    // #include <iostream>
    // #include <fstream>
    // using namespace std;
    // onlinegdb.com
    ofstream outfile("my.txt", ios::trunc); // fstream lib should be included
    // modes app - append, trunc - truncate. by default truncate ios:trunc taken

    outfile << "BEU" << endl;
    outfile << 16;

    // closing the stream. it is important. need to release the resource
    outfile.close();





    // L4 - Reading from file (my.txt)
    ifstream infile;
    // file must be existed (my.txt)
    infile.open("my.txt");

    // or short you can use as below
    // ifstream infile("my.txt");

    if (infile.is_open() == false) {
        cerr << "Error opening file (or not exists)" << endl;
    }

    string str;
    int x;

    infile >> str;
    infile >> x;

    cout << str << endl;
    cout << x << endl;

    if(infile.eof()) {
        cout << "EOF reached" << endl;
    }

    infile.close();



    return 0;
}
