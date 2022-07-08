#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
{
    cout<<v.at(i)<< " ";
}
cout<<endl;
}

int main(){
    vector <int> vec1;
    int element , size;
    cout << "Enter the size of your vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector ";
        cin>>element;
        vec1.push_back(element);//push_back add element at the last of vector
    }
    display(vec1);
    cout << "size of the vector is : " << vec1.size();
    return 0;
}