//  Count Vowels and Words and Consonants in a String
// vowels are a,e,i,o,u and A,E,I,O,U
// all rest are consonants or a space
#include<iostream>
using namespace std;
int main(){
    string str = "how Many wOrds";
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') || (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'))
        {
            vowels++;
        }
        else if(str[i]==' '){
            spaces++;
        }
        else{
            consonants++;
        }
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
    cout<<"Spaces: "<<spaces<<endl;

}