#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function of class with same name as of the class.
    // it is automatically invoked
    // it used to initializ the objects of the class
    Complex(void); // constructor declaration
    void printdata()
    {
        cout << "your no. is  : " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void) //---> this is Default Constructor
{
    a = 10;
    b = 0;
}
int main()
{
    Complex c;
    c.printdata();
    return 0;
}

/********** Constructor Characteristics *********
 *  It should be decleared in the public section of the class
 *  they are automatically invoked whenever the object is created
 *  They cannot return values and do not have return types
 *  it can have default arguments
 *  We cannotrefer to their address
 *************************************************************************/
