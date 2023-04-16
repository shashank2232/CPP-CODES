#include<iostream>
using namespace std;
void fun(){
    static int x = 10;
    x++;
    cout<<x<<" ";
}
int main(){
    fun();
    fun();
    fun();
}