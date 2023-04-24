#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
     
    public:
    // functions
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
    // SETTER
    // since for length and breadth user can give negative value also, we have to write condition, set length and breadth only when user given data is positive
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
    // now setLength and setBreadth setter function only put user given value in length and breadth after checking if its valie(>0) or not

    // GETTER
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};
int main(){
    Rectangle r;
    r.setLength(10);            // setting length using our object r calling setter function setLength
    r.setBreadth(20);
    cout<<"Area is "<<r.area()<<endl;
    cout<<r.getBreadth()<<" "<<r.getLength()<<endl;

}