#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string name ;
    ofstream aout("sample60.txt");
    cout << "Enter Your Name : " <<endl;
    cin >> name;

    // writing astring to a file
    aout <<  name + " is my name.";
    aout.close();


    string content ;
    ifstream eout("sample60.txt");
    getline(eout, content);
    eout >> content;
    cout << "The content of the file is : " << content;
    eout.close();

    return 0;
}
