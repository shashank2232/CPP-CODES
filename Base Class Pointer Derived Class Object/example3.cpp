#include<iostream>
using namespace std;

class BasicCar{
    public:
    void start(){
        cout<<"CAR STARTED"<<endl;
    }
};
class AdvanceCar:public BasicCar{
    public:
    void playMusic(){
        cout<<"MUSIC PLAYING"<<endl;
    }
};
int main(){
    AdvanceCar a;
    BasicCar *ptr = &a;
    ptr->start();
    // ptr->playMusic();                error
}