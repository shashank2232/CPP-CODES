#include<iostream>
using namespace std;
int main(){
    string str = "nitin";
    // getline(cin,str);
    string rev = "";
    // since length function returns long int, we must typecast it to integer
    int len = (int)str.length();
    // to make size of rev equal to str
    rev.resize(len);
    // i is to traverse rev,j is for str to traverse it from back till front,
    for(int i=0,j=len-1;i<len;i++,j--){
        rev[i] = str[j];
    }
    rev[len] = '\0';          // string terminator
    // if(rev == str){
    //     cout<<"PALINDROME";
    // }
    // else{
    //     cout<<"NOT A PALINDROME";
    // }
    // .compare is used to compare 2 strings
    if(str.compare(rev) == 0){
        cout<<"PALINDROME";
    }
    else{
        cout<<"NOT A PALINDROME";
    }

}