#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={13,46,24,52,9,3};
    int n=sizeof(arr)/sizeof(int);

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
// if  not sorted do adjacent swaps
   for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

}

//T.C => O(n^2)
//s.c => O(1)