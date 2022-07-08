#include <iostream>
using namespace std;

class Y;
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "sum dates of X and Y objects" << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setValue(3);
    Y b1;
    b1.setValue(5);
    return 0;
}