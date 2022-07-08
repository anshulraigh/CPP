#include <iostream>
#include <functional> // to use function object
#include <algorithm>  // to use sorting

using namespace std;

int main()
{

    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    sort(arr, arr + 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    // to arrange in decending order we can use
    cout << " After using Function Object \n"
         << endl;
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}