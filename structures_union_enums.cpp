#include <iostream>
using namespace std;

struct employee
{
     int eId;
     char favChar;
     float salary;
};

int main(){
    struct employee Anshul;
    struct employee Amit;
    struct employee Rajeev;
    Anshul.eId = 1;
    Anshul.favChar = 'E';
    Anshul.salary = 50000000000000;

    cout<<"The value of Anshul's salary is ---"<<Anshul.salary<<endl;
    cout<<"The value of Anshul's Id is ---"<<Anshul.eId<<endl;
    cout<<"The value of Anshul's Fav charachter is ---  "<<Anshul.favChar<<endl;

    /**********typedef structure (typedef struct)************/ 

    typedef struct student
    {
     int eId;
     char favChar;
     float salary;
    } st ;

     st Aman;
     Aman.eId = 2;
     Aman.favChar ='m';
     Aman.salary = 1000000000;

    cout<<"The value of Aman's salary is ---"<<Aman.salary<<endl;
    cout<<"The value of Aman's Id is ---"<<Aman.eId<<endl;
    cout<<"The value of Aman's Fav charachter is ---  "<<Aman.favChar<<endl;
    
    /***********************union**************************/
    // used to share memory between given datatype
    /* yha hme rice,car ya pound k badle me kuch lena h, mtlb hm ,
    use in 3 me se sirf 1 ko krenge , to "union" ki wjh se memory me 
    jgh sirf uuse milegi jo sbse jyada memory le rha hoga */

    union money
    {
       int rice;
       char car;
       float pounds;
    };

    union money t1;
    t1.rice = 34;
    t1.car = 'b';
    cout<<"The value of rice"<<t1.rice<<endl;
    // The value of rice we got is wrong , because now we using car 
    

    /****************enum******************/
    /* it allocate the position of the vaiable which are given by user*/
    enum meal 
    {
      Breakfast,Lunch,Dinner
    };
     meal m2=Breakfast;
     meal m1=Lunch; 
    cout<<m2<<endl;
    cout<<m1<<endl;
    cout<<(m1==1) //we get 1(true case) ,cause position of lunch is 1
    cout<<(m1==2) //we get 0(false case),cause 2 is the position of dinner
    cout<<"the position of Breakfast is  "<<Breakfast<<endl;
    cout<<"the position of Lunch is  "<<Lunch<<endl;
    cout<<"the position of Dinner is  "<<Dinner<<endl;

    return 0;

    
}
