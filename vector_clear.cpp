// clearing vectors
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> myvector;
    myvector.push_back(100);
    myvector.push_back(200);
    myvector.push_back(300);

    cout << "myvector contains:";
    for (unsigned i = 0; i < myvector.size(); i++)
        cout << ' ' << myvector[i];
    cout << '\n';

    myvector.clear();
    myvector.push_back(1101);
    myvector.push_back(2202);

    cout << "myvector contains:";
    for (unsigned i = 0; i < myvector.size(); i++)
        cout << ' ' << myvector[i];
    cout << '\n';

    return 0;
}