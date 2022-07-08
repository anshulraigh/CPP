#include<iostream>
using namespace std;

/* An array is allocation of items of similar type stored in contigous memory locatoins*/
// some time , a simple variable is not enough to hold all the data
// For example, lets say we want to store marks of 2500 students, having 2500 diffrent variable for this task is not feasible.
// to solve this problem, we can define an array with size 2500 that can hold the marks of all students.




int main(){
    // Array Example
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

   /* cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl; */

    // You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

     cout<<"result with for loop";

    for (int i = 0; i < 4; i++)
    {
      cout<<"The value of marks "  <<i<<  " is "<<marks[i]<<endl;
    }

    // Quick quiz: do the same using while and do-while loops?

    // Pointers and arrays

     cout<<"result of pointers and arrays";

     int* p = marks;
     cout<<"The value of *p is "<<*p<<endl;
     cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
     cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
     cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 


     cout<<" same thing with do while loop"<<endl;

    int i=0;
    do {
        cout<<"the value of marks"<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    while (i<4);
    
    return 0;
}
