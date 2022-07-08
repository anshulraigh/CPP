#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A &setData(int a)
    {
        this->a = a; // using it cause not using void data type. using A as datatype
        return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.setData(4).getData();

    return 0;
}
