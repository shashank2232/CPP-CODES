#include<iostream>
using namespace std;
int main(){
    // Method 1
    // string str = "tomorrow";
    // int i=0;
    // int count = 0;
    // while(str[i] != '\0'){
    //     count++;
    //     i++;
    // }
    // cout<<"LENGTH OF STRING IS: "<<count;

    // Method 2
    // string str = "tomorrow";
    // string::iterator it;
    // int count=0;
    // for(it=str.begin();it != str.end();it++){
    //     count++;
    // }
    // cout<<"LENGTH OF STRING IS: "<<count<<endl;

    // Method 3
    string str = "tomorrow";
    cout<<"LENGTH OF STRING IS: "<<str.length()<<endl;
    cout<<"LENGTH OF STRING IS: "<<str.size()<<endl;
}