#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r;
    while(n>0){
        r = n%10;
        n = n/10;
        // r contains last digit and n keeps shortening, for 1234 first r=4 and n=123, then r=3 and n=12, then r=2 and n=1, then r=1 and n becomes 1/10 i.e. 0
        cout<<r<<" ";
    }
}