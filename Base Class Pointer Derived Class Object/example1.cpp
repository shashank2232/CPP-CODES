#include<iostream>
using namespace std;
class Base{
    public:
    void fun1(){
        cout<<"fun1 of Base"<<endl;
    }
};
class Derived:public Base{
    public:
    void fun2(){
        cout<<"fun2 of Derived"<<endl;
    }
};
int main(){
    Derived d;
    // d.fun1();
    // d.fun2();

    // making a pointer of Base class and assigning it to object of Derived class
    // Base *ptr = &d;
    // ptr->fun1();
    // ptr->fun2();             // since function fun2() isn't present in Base class i.e. a pointer of Base class will look for functions inside Base class only, since Base class not have fun2() ptr cant access fun2()

    // taking a Derived class pointer and assigning it to object of Base class
    Derived *p;
    Base b;
    // p = &b;             // we can't assign an object of Base class to a pointer of Derived class
    
}