#include <iostream>
#include <vector>

using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class anshul
{
public:
    T1 a;
    T2 b;
    T3 c;
    anshul(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << " the value of a is " << a << endl;
        cout << " the value of b is " << b << endl;
        cout << " the value of c is " << c << endl;
    }
};

int main()
{
    anshul<> programmer(1, 2.0, 'e');
    programmer.display();
    cout << endl;

    anshul<char , char , char> a('e','t','k');
    a.display();
    
    return 0;
}