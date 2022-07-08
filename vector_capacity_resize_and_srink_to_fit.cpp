// vector::resizeS
// vector::shrink_to_fit

#include <iostream>
#include <vector>

using namespace std;
int main ()
{
  vector<int> myvector (100);
  cout << "1. capacity of myvector: " << myvector.capacity() << '\n';

  myvector.resize(10);
  cout << "2. capacity of myvector: " << myvector.capacity() << '\n';

  myvector.shrink_to_fit();
  cout << "3. capacity of myvector: " << myvector.capacity() << '\n';

  return 0;
}