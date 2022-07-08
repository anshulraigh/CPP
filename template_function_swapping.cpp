#include <iostream>
using namespace std;

template <class T>
void swaap(T &a, T &b){
    float temp = a;
          a = b;
          b = temp;
}
int main(){
    int x =5, y=7;
    swaap(x,y);
    cout<<x << endl <<y<<endl;
    return 0;
}