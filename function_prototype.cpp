#include <iostream>
using namespace std;

int sum(int a, int b);  //Acceptable
//int sum(int , int );  //Acceptable
//int sum(int a,b);     // Not Acceptable
void g(void);

int main(){
    int num1,num2 ;
    cout<<"Enter first no. "<<endl;
    cin>>num1;
    cout<<"Enter second no. "<<endl;
    // num1 and num2 are Actual Parameters
    cin>>num2;   
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

int sum(int a, int b)
{   //Formal Parameters a and b will be taking values from Actual parameters num1 & num2
    int c =a+b;
    return c;
}

void g()
{
 cout<<"\nHello Good Morning"<<endl;
};