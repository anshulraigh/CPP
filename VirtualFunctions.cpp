#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
        /*Virtual function allows to over right default setting
        of accesing function of another class which poited by pointer
        of it's own class */
        
        // if we not use virtual keyword it will access function of it's own class
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}