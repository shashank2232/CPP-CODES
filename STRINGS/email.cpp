// find username from email address
#include<iostream>
using namespace std;
int main(){
    string email = "shashankmish0610@gmail.com";
    // to find index of @ (it will give index long int so typecast it)
    int i = (int)email.find('@');

    string uname = email.substr(0,i);
    cout<<"USERNAME: "<<uname<<endl;
}