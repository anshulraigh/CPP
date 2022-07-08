#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter an element to add to this vector";
        cin >> element;
        vec1.push_back(element); // push_back add element at the last of vector
    }
    display(vec1);
    return 0;
}