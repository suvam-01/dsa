#include<bits/stdc++.h>
using namespace std;

int lowerB(int arr[],int s,int key){
    int start=0;
    int end=s-1;
    
    while(start<end){

        int mid=start+(end-start)/2;

        if(arr[mid]>=key){
            end=mid;
        }

        else{
            start=mid+1;
        }
    }

    return end;
}

int main(){
    int arr[]={1,2,2,3};
    int size=sizeof(arr)/sizeof(int);

    cout<<lowerB(arr,size,2)<<endl;
}