// vector::back
// Returns a reference to the last element in the vector
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> myvector;

    myvector.push_back(10);

    while (myvector.back() != 0)
    {
        myvector.push_back(myvector.back() - 1);
    }

    cout << "myvector contains:";
    for (unsigned i = 0; i < myvector.size(); i++)
        cout << ' ' << myvector[i];
    cout << '\n';

    return 0;
}