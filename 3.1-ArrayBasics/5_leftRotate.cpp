#include<bits/stdc++.h>
using namespace std;
void brute(int arr[], int n){
    int a=arr[0];

    for(int i=0;i<n-1; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=a;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int  arr[] = {2,2,3,4,4,4,5,6};
    int n=sizeof(arr)/sizeof(int);

    brute(arr,n);
}