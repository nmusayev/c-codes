#include <iostream>
using namespace std;

#include <fstream>

int main()
{
    ofstream outfile("my.txt", ios::trunc); // fstream lib should be included
    // modes app - append, trunc - truncate. by default truncate ios:trunc taken
    // onlinegdb.com -> c++
    outfile << "Hello" << endl;
    outfile << 25;

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
