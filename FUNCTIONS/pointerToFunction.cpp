#include<iostream>
using namespace std;
int max(int x,int y){
    return x>y?x:y;
}
int min(int x,int y){
    return x<y?x:y;
}
int main(){
    int (*fp)(int,int);              // this is a pointer to a function, fp will store address of function it'll point further
    fp = max;                        // here fp is assigned to max function(note we aren't using () with max although its a function because we're assigning a pointer to it)
    cout<<(*fp)(20,3)<<endl;        // 20
    fp = min;                       // here fp is assigned to min
    cout<<(*fp)(20,3)<<endl;        // 3

}

// so we have seen we can assign pointer to a function fp to first max fn() then to min fn()
// first pointer fp was pointing to max fn() then it was pointing to min fn()
// same name different functions/operations i.e. POLYMORPHISM
// A FUNCTION POINTER CAN POINT ON ALL THOSE FUNCTIONS HAVING SAME SIGNATURES(BOTH MAX AND MIN HAVE SAME PARAMETERS)