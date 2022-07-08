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
    // Removing element from the list
    cout << endl;
    list1.pop_back();//delete element from last of the list 
    list1.pop_front();//delete element from start of the list 
    list1.remove(1);//  listname.remove(element you want to delete)
    display(list1);

    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;

    return 0;
}