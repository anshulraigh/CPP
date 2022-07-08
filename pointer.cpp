#include <iostream>
using namespace std;

int main(){
    /* What is pointer ? 
    ----> Data type which holds the address of other data types.*/
    int a=3;
    int* b;
    b= &a;

    // & ---->(Address Of) Operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;

    // * ----> (value at) Dereference Operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c= &b;
    cout<<"The address of b is"<<&b<<endl;
    cout<<"The address of b is"<<&c<<endl;
    cout<<"The value at address of c is"<<c<<endl;
    cout<<"The value at address value at (value at(c)) is"<<*c<<endl;

    return 0;
}