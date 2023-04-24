#include<iostream>
using namespace std;

class Rectangle{
    // in c++, by default data is private
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
// we need ; in end of class in c++ but not in java
int main(){
    // creating objects of class Rectangle (here when we create the objects r1 and r2 they get memory in the stack)
    // NOTE: functions dont occupy any memory space
    // (if integer takes 2 bytes of memory,size of class is 4 bytes, so r1 will take 4 bytes of memory(2 for length,2 for breadth) and so r2 takes 4 bytes , total memory taken by both on getting initialized is 8 bytes)
    Rectangle r1,r2;          
    r1.length = 10;
    r1.breadth = 20;
    cout<<"Area of rectangle r1 is "<<r1.area()<<endl;       
    cout<<"Perimeter of rectangle r1 is "<<r1.perimeter()<<endl;      
    r2.length = 4;
    r2.breadth = 8;
    cout<<"Area of rectangle r2 is "<<r2.area()<<endl;       
    cout<<"Perimeter of rectangle r2 is "<<r2.perimeter()<<endl;
    // . is used to access both data members and member functions

}