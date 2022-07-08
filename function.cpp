#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c =a+b;
    return c;
}

int main(){
    int num1,num2 ;
    cout<<"Enter first no. "<<endl;
    cin>>num1;
    cout<<"Enter second no. "<<endl;
    cin>>num2;   
    cout<<"The sum is "<<sum(num1,num2);
    return 0;
}