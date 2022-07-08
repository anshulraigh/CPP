#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;
    /* We created an integer variable “a” and assign the value “4” to it
   We created an integer pointer “ptr” and assign the address of variable “a”
   And printed the value at the address of pointer “ptr” */

    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
    /* We created a float pointer “p” and dynamically created a float which has
     value “40.78” and assigned that value to pointer “p” And printed the value
     at the address of pointer “p” */

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    /* We created an integer pointer “arr” and dynamically created an array of
    size three which is assigned to the pointer “arr” The values “10”, “20”,
    and “30” are assigned to the ”1”, “2”, and “3” indexes of an array
    And printed the value at the array indexes “1”, “2”, and “3”*/

    /////// Delete Operator ///////

    int *array = new int[3];
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    delete[] array;
    cout<<"using Delete Operator"<<endl;
    cout << "The value of arr[0] is " << array[0] << endl;
    cout << "The value of arr[1] is " << array[1] << endl;
    cout << "The value of arr[2] is " << array[2] << endl;
    /* We created an integer pointer “arr” and dynamically created an array of
     size three which is assigned to the pointer “arr” The values “10”, “20”,
     and “30” are assigned to the ”1”, “2”, and “3” indexes of an array Before
      printing the values we used the “delete” keyword And printed the value
      at the array indexes “1”, “2”, and “3” */

    /* we get the garbage value in the output instead of “10”, “20”, and “30”
    because we have used “delete” keyword before printing the values due to
    which the space used by an array gets free and we get the garbage value in
    return */

    return 0;
}
