#include<iostream>
using namespace std;
// int linearSearch(int arr[],int n,int key){
//     if(n == 0){
//         return -1;
//     }
//     else if(arr[n-1] == key){
//         return n-1;
//     }
//     else{
//         int ans = linearSearch(arr,n-1,key);
//         return ans;
//     }
    
// }

int linearSearch(int arr[],int n,int key,int i){
    // base case
    if(i>=n){
        return -1;
    }

    // checking
    if(arr[i] == key){
        return i;
    }
    // recursive case
    return linearSearch(arr,n,key,i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int index = linearSearch(arr,n,key,0);
    if(index == -1){
        cout<<"NOT FOUND!";
    }
    else{
        cout<<"FOUND AT: "<<index;
    }
}