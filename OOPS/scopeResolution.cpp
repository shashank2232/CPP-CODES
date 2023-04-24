#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    // CONSTRUCTORS
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    // ACCESSORS
    int getLength();
    int getBreadth();
    // MUTATORS
    void setLength(int l);
    void setBreadth(int b);
    // FACILITATORS
    int area();
    int perimeter();
    // DESTRUCTOR
    ~Rectangle();

    // now we'll implement all of them outside class using scope resolution ::
};
int main(){
    Rectangle r1(10,10);
    cout<<"Area is: "<<r1.area()<<endl;

}
Rectangle::Rectangle(){
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b){
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r){
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l){
    if(l >=0){
    length = l;
    }
    else
    length=1;
}
void Rectangle::setBreadth(int b){
    if(b >=0){
    breadth = b;
    }
    else
    breadth=1;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed";
}