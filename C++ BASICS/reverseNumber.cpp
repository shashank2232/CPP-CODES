#include<iostream>
using namespace std;
int main(){
    int n,rev=0,r;
    cout<<"ENTER NUMBER:";
    cin>>n;
    while(n>0){
        r = n%10;
        n = n/10;
        rev = rev*10 + r;
    }
    cout<<"REVERSE: "<<rev;

}