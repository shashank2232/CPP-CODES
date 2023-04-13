#include<iostream>
using namespace std;
int main(){
// PATTERN 1
    // int count=1;
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // PATTERN 2
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i>=j){
    //             cout<<"*";
    //         }
    //     }cout<<endl;
    // }

    // PATTERN 3
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i > j){
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }cout<<endl;
    // }

    // PATTERN 4
    int n = 4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j >= n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}