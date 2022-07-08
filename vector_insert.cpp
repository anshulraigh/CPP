#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v.[i] << " ";
        cout << v.at(i) << " "; // at ->Access element -> points the (i)th position of vector
    }
    cout << endl;
}

int main()
{
    vector<int> rai; // rai is a object of vector
    int element, size;
    cout << "Enter the size of your vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector";
        cin >> element;
        rai.push_back(element); // push_back add element at the last of vector
    }
    display(rai);
    cout << endl;

    // Using insert in Vecter
    vector<int>::iterator anshul = rai.begin(); // iterator->points the location in vector
                                                //  anshul->is name of iterator
                                                //  begin->Return iterator to beginning
    rai.insert(anshul, 530); // inserting 530 in 1st position of vector
    // rai.insert(anshul+2,530);// inserting 530 in 3st position of vector
    // rai.insert(anshul+4,3,530);// inserting 530 ,3 times in 4st position of vector
    cout << "result after insert " << endl;
    display(rai);
    return 0;
}