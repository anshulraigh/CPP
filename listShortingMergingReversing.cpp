#include <iostream>
#include <list>

using namespace std;

void display(list<int> lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    list<int> list1;    // List of 0 Length
    list<int> list2(3); // Empty list of size 3
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);
    cout << endl;

    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;

    display(list2);
    cout << endl;

    // Sorting the list
    cout << "after sorting list1 and list2 " << endl;
    list1.sort();
    display(list1);
    cout << endl;
    list2.sort();
    display(list2);
    cout << endl;

    // merging list1 and list2
    list1.merge(list2);
    cout << "list1 after merging : ";
    display(list1);
    cout << endl;

    // Reversing the list
    list1.reverse();
    cout << "list1 after Reversing : ";
    display(list1);
    cout << endl;

    return 0;
}