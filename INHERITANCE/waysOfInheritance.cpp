#include<iostream>
using namespace std;
// 1. Inheriting PUBLICALLY
// all the members of Parent class are as it is taken in Child class
class Parent{
    private: int a;
    protected: int b;
    public: int c;

    void funParent(){
        a=10;
        b=5;
        c=15;
    }
};
class Child:public Parent{
    public:
    void funChild(){
        // a=10;         (not able to access a as its private in Parent class)
        b=5;
        c=15;
    }
};
class GrandChild:public Child{
    public:
    void funGrandChild(){
        // a=10;
        b=5;
        c=15;
    }
};

int main(){
    Child c;
    // c.a = 123;
    // c.b = 12345;
    c.c = 0;
}