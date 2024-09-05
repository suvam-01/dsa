#include<bits/stdc++.h>
using namespace std;

int main(){
    int  arr[] = {2,5,1,3,0};
    int n=sizeof(arr)/sizeof(int);
    
    int maxi=INT_MIN;
    for(int i=0; i<n ; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;
}