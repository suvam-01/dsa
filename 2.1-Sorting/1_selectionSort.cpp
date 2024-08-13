#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[]={13,46,24,52,9,3};
    int n=sizeof(arr)/sizeof(int);

    for(int ele:arr){
        cout<<ele<<" ";
    }

    cout<<endl;

// find minimum in the array

    for(int i=0; i<n-1;i++){
        int mini=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

}
