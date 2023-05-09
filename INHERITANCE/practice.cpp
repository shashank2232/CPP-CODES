#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    // constructors
    Rectangle(){
        length =1;
        breadth =1;
    };
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    // GETTERS
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    // SETTERS
    void setLength(int l){
        length = l;
    }
    void setBreadth(int b){
        breadth = b;
    }
    // functions for calculations
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
    // destructor
    ~Rectangle();
};
class Cuboid:public Rectangle{
    int height;
    public:
    Cuboid(int h){
        height = h;
    }
    int getHeight(){
        return height;
    }
    void setHeight(int h){
        height = h;
    }
    int volume(){
        return getLength() * getBreadth() * height;           // since length and breadth in class Rectangle are private,to access it we use getter fn()
    }

};
int main(){
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout<<c.volume()<<endl;
}