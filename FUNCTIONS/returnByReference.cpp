#include<iostream>
using namespace std;
int &fun(int &x){
    return x;
}
int main(){
    int a=10;
    // fun(a);
    // here main() is having a(local variable) , a is sent to x, x is reference to a
    fun(a) = 25;      // since a is passed to fun() and via reference it same is returned back so fun(a)=25 means a has now 25
    cout<<a<<endl;
}