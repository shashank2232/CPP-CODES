#include<iostream>
using namespace std;
void rec(int a){
    if(a > 0){
        cout<<a<<" ";
        rec(a-1);
    }
}
int main(){
    int x=10;
    rec(x);
}