#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l){
        if(l>0){
            length = l;
        }
        else{
        length = 1;
        }
    }
    void setBreadth(int b){
        if(b>0){
            breadth = b;
        }
        else{
            breadth = 1;
        }
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};
int main(){
    Rectangle r;
    // since length and breadth are private, they can't be accessed by object of Rectangle
    // r.length = 10;
    // r.breadth = 15;
    r.setLength(10);
    r.setBreadth(20);
    cout<<"Length "<<r.getLength()<<endl;
    cout<<"Breadth "<<r.getBreadth()<<endl;
    cout<<"Area "<<r.area()<<endl;
}