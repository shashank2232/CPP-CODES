#include<iostream>
using namespace std;
// pass by value
// void swap(int a,int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     // cout<<a<<" "<<b<<endl;
// }
// int main(){
//     int x=10,y=20;
//     swap(x,y);              // here values of x and y r copied to a and b (x and y are actual parameters while a and b are formal parameters)
//     cout<<x<<" "<<y<<endl;
// }

// pass by address
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int x=10,y=20;
//     swap(&x,&y);
//     cout<<x<<" "<<y<<endl;
// }

// pass by reference
void swap(int &a,int &b){
    cout<<&a<<" "<<&b<<endl;
    int temp = a;
    a = b;
    b = temp;
    // cout<<a<<" "<<b<<endl;
}
int main(){
    int x=10,y=20;
    swap(x,y);          
    cout<<x<<" "<<y<<endl;
    cout<<&x<<" "<<&y<<endl;        // since machine code will be same for swap fn() too, the address of a,b will be same as x,y
}