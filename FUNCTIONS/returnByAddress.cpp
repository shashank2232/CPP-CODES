#include<iostream>
using namespace std;
// int x=20;
// int *fun(){
//     return &x;
// }
// int main(){
//     int *ptr = fun();
//     cout<<*ptr<<endl;
// }

// another example
int *fun(){
    int *p = new int[5];
    for(int i=0;i<5;i++){
        p[i] = 5*i;
    }
    cout<<p<<endl;
    return p;
}
int main(){
    int *q = fun();
    cout<<q<<endl;
    // here address of p and q both are same (return by address)
    for(int i=0;i<5;i++){
        cout<<q[i]<<endl;
    }
    
}