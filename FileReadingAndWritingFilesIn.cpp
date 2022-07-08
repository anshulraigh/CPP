/*
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

*/
// In oredr to work with files in c++ , you will have to open it .
// primarily there are two ways to open a file :
// 1. Using the Constructor
// 2. Using the member function open() of the class

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Anshul Rai";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
                                  //    ofstream --> Write operation
                                  //    out --> Object (you can change it by your choise)
                                  //    ("sample60.txt")---> the file we are acceseing.
    out << st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    getline(in, st2);
    in >> st2;
    cout << st2;
    return 0;
}
