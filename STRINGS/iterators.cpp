#include<iostream>
using namespace std;
int main(){
    // string str = "today";
    // string::iterator it;
    // for(it=str.begin();it<str.end();it++){
    //     cout<<*it;
    // }
    // cout<<endl;
    // // to make in uppercase
    // for(it=str.begin();it<str.end();it++){
    //     *it = *it - 32;
    // }
    // cout<<str<<endl;

    // REVERSE ITERATING
    // string str = "today";
    // string::reverse_iterator it;
    // for(it=str.rbegin();it<str.rend();it++){
    //     cout<<*it;
    // }

    // Iterating using for loop
    string str = "today";
    for(int i=0;str[i] != '\0';i++){
        cout<<str[i];
    }
}