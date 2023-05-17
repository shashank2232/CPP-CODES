#include<iostream>
using namespace std;

class Parent{
    public:
    void display(){
        cout<<"DISPLAY OF PARENT"<<endl;
    }
};
class Child:public Parent{
    public:
    void display(){
        cout<<"DISPLAY OF CHILD"<<endl;
    }
};
int main(){
    Child c;
    c.display();
    // c.Parent::display();
}

// function overriding means writing a function again with some modifications. it also means prototype of the function should be as it is same 