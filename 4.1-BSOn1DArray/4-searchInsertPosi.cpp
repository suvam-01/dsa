#include<bits/stdc++.h>
using namespace std;

int searchPos(int arr[],int s,int k){
     int start=0;
    int end=s-1;
    
    while(start<end){

        int mid=start+(end-start)/2;

        if(arr[mid]>=k){
            end=mid;
        }

        else{
            start=mid+1;
        }
    }

    return end;
}

int main(){
    int arr[] ={1,2,4,7};
    int size=sizeof(arr)/sizeof(int);

    cout<<searchPos(arr,size,6)<<endl;
}