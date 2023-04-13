#include<iostream>
using namespace std;
int main(){
//   char S[10] = "Hello";  
//  char S[] = "Hello";
    // char S[] = {65,66,67,68};
    // cout<<S<<endl;
    // char *S="Hello";

    // string s = "Hello";
    // cout<<s;

    // char s[50];
    // cin.get(s,50);
    // cin.getline(s,50);
    // cout<<s<<endl;

    // diff between get and getline
    char s[200];
    cout<<"Enter name: ";
    cin.get(s,200);
    cout<<"Welcome "<<s<<endl;
    cin.ignore();
    char s2[200];
    cout<<"Enter name: ";
    cin.get(s2,200);
    cout<<"Welcome again "<<s<<endl;

    char a[200];
    cin.getline(a,200);
    cout<<a<<endl;

}