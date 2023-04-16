#include<iostream>
using namespace std;
int x=10;
int main(){
    int x=20;
    {
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;                // to access that global variable x whose name is same as local variable, use ::
}