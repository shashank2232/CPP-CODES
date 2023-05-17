#include<iostream>
using namespace std;

// classes having pure virtual functions are called ABSTRACT CLASSES
class Car{
    public:
    virtual void start() = 0;
};
class Innova:public Car{
    public:
    void start(){
        cout<<"INNOVA STARTED"<<endl;
    }
};
class Swift:public Car{
    public:
    void start(){
        cout<<"SWIFT STARTED"<<endl;
    }
};
int main(){
    Car*ptr = new Innova();
    ptr->start();
    ptr = new Swift();
    ptr->start();
}