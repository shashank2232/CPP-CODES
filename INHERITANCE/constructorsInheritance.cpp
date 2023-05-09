#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Default constructor of Parent"<<endl;
    }
    Parent(int x){
        cout<<"Parameterized constructor of Parent "<<x<<endl;
    }
};
class Child:public Parent{
    public:
    Child(){
        cout<<"Default constructor of Child"<<endl;
    }
    Child(int a){
        cout<<"Parameterized constructor of Child "<<a<<endl;
    }

    // to call Parent class parameterized constructor using Child class object(first param of Parent will execute then param of Child execute)
    Child(int x,int a):Parent(x)
    {
        cout<<"Parameterized constructor of Child "<<a<<endl;
    }
};

int main(){
    // Child c;          // Default constructor of Parent , Default constructor of Child
    // Child c(10);      // Default constructor of Parent , Parameterized constructor of Child 10
    Child c(5,10);       // Parameterized constructor of Parent 5 , Parameterized constructor of Child 10
}