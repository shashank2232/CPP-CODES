#include<iostream>
using namespace std;
// BENEFIT of Default argument is we can define overloaded functions by writing a single function

// c is a default argument here, if user gives value of c it takes it and continues, if user doesn't give value of c it takes 0 by default
// work of 2 functions is done in 1 only and code becomes more optimised
int add(int a,int b,int c=0){
    return a+b+c;
}
// int add(int a,int b){
//     return a+b;
// }
// int add(int a,int b,int c){
//     return a+b+c;
// }
int main(){
    cout<<add(2,3)<<endl;
    cout<<add(4,5,6)<<endl;
}