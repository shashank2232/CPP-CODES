// class Base {
//   public:
//     int x;
//   protected:
//     int y;
//   private:
//     int z;
// };

// class PublicDerived: public Base {
//   // x is public
//   // y is protected
//   // z is not accessible from PublicDerived
// };

// class ProtectedDerived: protected Base {
//   // x is protected
//   // y is protected
//   // z is not accessible from ProtectedDerived
// };

// class PrivateDerived: private Base {
//   // x is private
//   // y is private
//   // z is not accessible from PrivateDerived
// };

#include<iostream>
using namespace std;

class Base{
    public:
    int a;
    void display(){
        cout<<"Display of Base! "<<a<<endl;
    }
};
class Derived:public Base{
    public:
    void show(){
        cout<<"Show of Derived!"<<endl;
    }
};

int main(){
    // Base b;
    // b.display();
    Derived d;
    d.a = 10;
    d.display();
    d.show();
}