#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // writing to the file
    ofstream outfile("my.txt", ios::trunc); // fstream lib should be included
    // modes app - append, trunc - truncate. by default truncate ios:trunc taken

    outfile << "Hello" << endl;
    outfile << 25 << endl;

    // closing the stream. it is important. need to release the resource
    outfile.close();


    // reading from the file
    ifstream infile;
    // file must be existed (my.txt)
    infile.open("my.txt");

    // or short you can use as below
    // ifstream infile("my.txt");

    if (!infile.is_open()) {
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


    // // STL - Standard Template Library
    // // Link: https://www.geeksforgeeks.org/the-c-standard-template-library-stl/
    // // Data Structure
    // // Linked List (it's hard to manage array. cannot increase/dec. size)
    // // Stack, Queue, Deque, Priority-Queue, Map, Set
    // // Algorithms (search, sort, reverse, concat, copy, union, merge)
    // // Containers (vector, list (dll), forward_list, dequeue, stack, set (unique), multiset, map (key:value pair), multimap)
    // // Iterators - iterating data structure

    // Stack - https://www.geeksforgeeks.org/stack-in-cpp-stl/
    // Queue - https://www.geeksforgeeks.org/queue-cpp-stl/

    // Google -> STL c++  (geeksforgeeks)

    return 0;
}
