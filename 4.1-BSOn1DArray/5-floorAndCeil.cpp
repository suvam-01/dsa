#include<bits/stdc++.h>
using namespace std;

int floor(int arr[],int s,int k){
    int start=0;
    int end=s-1;
    int ans;
    while(start<=end){

        int mid=start+(end-start)/2;

        if(arr[mid]<=k){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }


    }
    return ans;
}

int ceil(int arr[],int s,int k){

    int start=0;
    int end=s-1;
    int ans;

    while(start<=end){

        int mid=start+(end-start)/2;

        if(arr[mid]>=k){
            ans=mid;
           end=mid-1;
        }
        else{
            start=mid+1;
        }


    }
    return ans;
}

int main(){
    int arr[] ={3, 4, 4, 7, 8, 10};
    int size=sizeof(arr)/sizeof(int);

    int f=floor(arr,size,5);
    int c=ceil(arr,size,5);

    cout<<arr[f]<<" "<<arr[c]<<endl;

    
}