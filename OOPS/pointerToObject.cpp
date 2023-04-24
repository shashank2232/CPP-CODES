// accessing object using pointer
#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    // functions
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};
int main(){
    // Rectangle r;             
    // Rectangle *p;      // pointer p and object r both r inside STACK
    // p = &r;         // p is a pointer pointing to object r of class Rectangle
    // // OR
    // // Rectangle *p = new Rectangle;       this is a dynamic object created in HEAP
    // // to access length,breadth using this pointer p
    // p->length = 20;
    // p->breadth = 10;
    // cout<<"Area is:"<<p->area()<<endl;
    // cout<<"Perimeter is:"<<p->perimeter()<<endl;

    // creating object in HEAP
    Rectangle *ptr = new Rectangle;
    ptr->length = 120;
    ptr->breadth = 50;
    cout<<"Area is:"<<ptr->area()<<endl;
    cout<<"Perimeter is:"<<ptr->perimeter()<<endl;


}