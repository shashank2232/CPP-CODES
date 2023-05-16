#include<iostream>
using namespace std;
class Rectangle{
    public:
    void area(){
        cout<<"Area Of Rectangle"<<endl;
    }
};
class Cuboid:public Rectangle{
    public:
    void volume(){
        cout<<"Cuboid Volume"<<endl;
    }
};
int main(){
    Cuboid c;
    c.area();
    c.volume();
    Rectangle *p = &c;
    p->area();
    // p->volume();        error 

    // we can't say object Rectangle is a Cuboid
    // Rectangle r;
    // Cuboid *q = &r;                 // error
} 