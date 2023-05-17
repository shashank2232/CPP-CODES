#include<iostream>
using namespace std;

class BasicCar{
    public:
    virtual void start(){
        cout<<"BASIC CAR STARTED"<<endl;
    }
};
class AdvancedCar:public BasicCar{
    public:
    void start(){
        cout<<"ADVANCE CAR STARTED"<<endl;
    }
};
int main(){
    BasicCar *ptr = new AdvancedCar();           // BasicCar pointer pointing on object of Advanced Car
    ptr->start();
    // A BasicCar pointer pointed to AdvanceCar object calls function start() of BasicCar initially, then when we make BasicCar function start() as 
    // virtual, then that pointer ptr calls AdvancedCar function start()
    // This whole process comes under POLYMORPHISM and is referred as RUN-TIME POLYMORPHISM
    // Hence using virtual function, overriding and base class pointer derived class object, we can achieve POLYMORPHISM(RUNTIME).
    // 
}