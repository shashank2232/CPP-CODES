#include<iostream>
using namespace std;
int main(){
    // NOTE: In ASCII code, a=97 and A=65 (to convert capital to small letter we do + and to convert small to capital we do -)
    // lowercase to uppercase
    // string str = "monday";
    // for(int i=0;str[i]!='\0';i++){
    //     str[i] = str[i]-32;
    // }
    // cout<<str<<endl;

    // // uppercase to lowercase
    // string str2 = "MONDAYy";
    // for(int i=0;str2[i]!='\0';i++){
    //     str2[i] = str2[i]+32;
    // }
    // cout<<str2;

    // for a string with both uppercase & lowercase letters
    // for all small
    // string str3 = "WeLcOmE";
    // for(int i=0;str3[i] != '\0';i++){
    //     if(str3[i]>=65 && str3[i]<=90){
    //         str3[i] = str3[i]+32;
    //     }
    // }
    // cout<<str3<<endl;
    // OR (for all capital)
    // string str4 = "WeLcOmE";
    // for(int i=0;str4[i] != '\0';i++){
    //     if(str4[i]>=97 && str4[i]<=122){
    //         str4[i] = str4[i]-32;
    //     }
    // }
    // cout<<str4<<endl;

    // change a string to uppercase which has lowercase,uppercase letters and a number
    string str = "WeLcOme5";
    for(int i=0;str[i] != '\0';i++){
        if(str[i]>=97 && str[i]<=122){
            str[i] = str[i]-32;
        }
        // else if(str[i]>=0 && str[i]<=9){
        //     continue;
        // }
    }
    cout<<str<<endl;

}