#include<iostream>
using namespace std;

class Base{
    public:
    virtual void fun(){
        cout<<"FUN OF BASE"<<endl;
    }
};
class Derived:public Base{
    public:
    void fun(){
        cout<<"FUN OF DERIVED"<<endl;
    }
};
int main(){
    Derived d;
    // d.fun();
    Base *ptr = &d;          // Basic *p = new Derived();
    ptr->fun();            // FUN OF BASE because when we make a pointer of Base class pointing on Derived class Object, then incase of function
    // overriding(2 functions with same name) the pointer calls function of Base class
    // to call function of Derived class,we have to make function of Base class as Virtual
}