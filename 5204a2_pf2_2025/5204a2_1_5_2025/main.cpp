#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    string name;
    int age;

    friend ofstream & operator<<(ofstream &ofs, Student &s);
    friend ifstream & operator>>(ifstream &ifs, Student &s);
};

ofstream & operator<<(ofstream &ofs, Student &s) {
    ofs << s.name << endl;
    ofs << s.age << endl;

    return ofs;
}

ifstream & operator>>(ifstream &ifs, Student &s) {
    ifs >> s.name >> s.age;

    return ifs;
}



int main()
{
    // L-5 Serialization (Writing)
    Student s1;
    s1.name = "Resul";
    s1.age = 19;

    ofstream ofs("students.txt", ios::trunc);
    ofs << s1;
    // ofs << s1.name << endl;
    // ofs << s1.age << endl;

    ofs << s1 << endl;



    // L-6 Serialization (Reading)
    Student s2;
    ifstream ifs("students.txt");
    // ifs >> s2.name;
    // ifs >> s2.age;

    ifs >> s2;

    cout << s2.name << endl;
    cout << s2.age << endl;

    ifs.close();


    return 0;
}
