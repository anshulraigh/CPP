#include <iostream>
#include <map>
#include <string>
using namespace std;

//map is an associative array
map<string,int>:: iterator it;

int main(){
    map<string , int> marksMap;
    marksMap["Anshul"] = 98;
    marksMap["Amit"] = 96;
    marksMap["Tanmay"] = 94;

    marksMap.insert({{"Pritam",69},{"Hemant",68}});
    map<string,int>:: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end() ; iter++)
    {
        cout << (*iter).first<<" "<<(*iter).second << "\n";
    }
    cout << "The size is : "<< marksMap.size() << endl;
    cout << "The max_size is : "<< marksMap.max_size() << endl;
    cout << "The empty size is : "<< marksMap.empty() << endl;

    return 0;
}