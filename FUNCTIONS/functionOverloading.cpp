#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
float sum(float a,float b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<sum(2,3);
    cout<<sum(2.5f,3.5f);           // NOTE: 2.5 is by default taken as double by compiler in c++, so we have to make it float by adding f
    cout<<sum(4,5,6);
}