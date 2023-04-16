#include<iostream>
using namespace std;
template<class T>
T maxim(T a,T b){
    return a>b?a:b;
}
// int maxim(int a,int b){
//     return a>b?a:b;
// }
// float maxim(float a,float b){
//     return a>b?a:b;
// }
int main(){
    cout<<maxim(2,3)<<endl;
    cout<<maxim(3.5,6.7)<<endl;          // double
    cout<<maxim(4.5f,5.6f)<<endl;        // float
}