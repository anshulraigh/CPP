// comparing size, capacity and max_size
#include <iostream>
#include <vector>

using namespace std;
//capacity -> Returns the size of the storage space currently allocated for the 
// vector, expressed in terms of elements.

// max_size -> Returns the maximum number of elements that the vector can hold.
int main ()
{
  vector<int> myvector;

  // set some content in the vector:
  for (int i=0; i<100; i++) myvector.push_back(i);

  cout << "size: " << (int) myvector.size() << '\n';
  cout << "capacity: " << (int) myvector.capacity() << '\n';
  cout << "max_size: " << (int) myvector.max_size() << '\n';
  return 0;
}