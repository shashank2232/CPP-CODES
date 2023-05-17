#include<iostream>
using namespace std;
class Car{
    public:
    // virtual void start(){
    //     cout<<"CAR STARTED"<<endl;
    // }
    // virtual void stop(){
    //     cout<<"CAR STOPPED"<<endl;
    // }

    // PURE VIRTUAL FUNCTIONS (whenever any class wants to inherit from this particular class, its necessary for them to override these 2 functions
    // virtual function assigned to 0 is a PURE VIRTUAL FUNCTION, these functions must be overrided by derived classes
    virtual void start() = 0;
    virtual void stop() = 0;
};
class Innova:public Car{
    public:
    void start(){
        cout<<"INNOVA STARTED"<<endl;
    }
    void stop(){
        cout<<"INNOVA STOPPED"<<endl;
    }
};
class Swift:public Car{
    public:
    void start(){
        cout<<"SWIFT STARTED"<<endl;
    }
    void stop(){
        cout<<"SWIFT STOPPED"<<endl;
    }
};
int main(){
    Car*ptr = new Innova();
    // ptr->start();
    // ptr->stop();                           // since Car functions start and stop aren't virtual, ptr of Car pointing to object of Innova calls functions
    // of Car , to call overrided functions start and stop of Innova we have to make Car functions as VIRTUAL

    ptr->start();
    ptr->stop();

    // now let ptr point on object of class Swift
    ptr = new Swift();
    ptr->start();
    ptr->stop();
    // it depends on which object pointer is pointing, if its pointing on object of Innova, Innova class functions will b called, same for Swift class
}
// NOTE: we don't need code of start() and stop() in our class Car, so we'll remove its body as their role is to just achieve polymorphism
// we wrote those functions i.e. virtual functions in class Car because we want those functions must be implemented by subclasses
// we want that when any class says that INHERIT FROM CAR class, that class must override those 2 functions i.e. start() & stop()
// for that we must assign virtual functions equal to 0
