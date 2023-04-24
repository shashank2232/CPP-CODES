#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
     
    public:
    // default constructor
    Rectangle(){
        length=1;
        breadth=1;
    }
    // parameterized constructor
    Rectangle(int l,int b){
        setLength(l);
        setBreadth(b);
    }
    // constructors with default arguments help us combine above 2 constructors into 1 only
    // Rectangle(int l=1,int b=1){
    //     setLength(l);
    //     setBreadth(b);
    // }
    
    // copy constructor
    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }

    void setLength(int l){
        if(l > 0){
        length = l;
        }
        else{
            length = 0;
        }
    }
    void setBreadth(int b){
        if(b > 0){
        breadth = b;
        }
        else{
            breadth = 0;
        }
    }
    
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};
int main(){
    // Rectangle r1(10,5);
    // Rectangle r2;
    // cout<<r1.area()<<endl;
    // cout<<r2.area()<<endl;

    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<r1.area()<<" "<<r2.area()<<endl;

}