#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &x, c2 &y);

public:
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &x, c2 &y);

public:
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
// if we dont use & swapping will not occured
void exchange(c1 &x, c2 &y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oct1;
    c2 oct2;

    oct1.indata(34);
    oct2.indata(67);
    exchange(oct1, oct2);
    cout << "the value of c1 after swapping  : ";
    oct1.display();
    cout << "the value of c2 after swapping  : ";
    oct2.display();
    return 0;
}