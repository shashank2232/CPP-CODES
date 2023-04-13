#include <iostream>
using namespace std;
// enum is used to define a group of constants under 1 name
enum day{mon,tue,wed=5,thur,fri,sat=123,sun};

int main()
{
    // day d;
    // d=mon;
    // cout<<d<<endl;
    // cout<<tue<<endl;
    cout<<mon<<" "<<tue<<" "<<wed<<" "<<thur<<" "<<fri<<" "<<sat<<" "<<sun<<endl;
}