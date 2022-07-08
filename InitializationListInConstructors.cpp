/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include <iostream>
using namespace std;

class Test
{
    // int a;
    // int b;
    int b; // Alt+upArroy to move up this line.
    int a;


public:
// Test(int i, int j) : a(i), b(j)     ---> Valid
// Test(int i, int j) : a(i), b(i+j)   ---> Valid
// Test(int i, int j) : a(i+j), b(j)   ---> Valid
// Test(int i, int j) : a(i), b(a+j)   ---> Valid
    Test(int i, int j) : a(b+i), b(j)    /*we get a garbage value because 
    a is decleared first so, it should be initialized first too. 
    it would be correct if we were declear b before a
    Ex:- line 13---> int b;
         line 14---> int a;
         it's correct now. */


    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
