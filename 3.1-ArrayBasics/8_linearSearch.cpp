#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            // cout<<"found at index"<<i<<endl;
            return i;
            
        }
    }

    return -1;
    
}
int main(){
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    int n=sizeof(arr)/sizeof(int);
    int ans=linearSearch(arr,n,4);

    if(ans==-1){
        cout<<"not found";
    }
    else{
        cout<<"found at index : "<<ans<<endl;
    }
}