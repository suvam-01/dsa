#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={13,46,24,52,9,3};
    int n=sizeof(arr)/sizeof(int);

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;


    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}