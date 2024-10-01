#include<bits/stdc++.h>
using namespace std;

int sea(int arr[],int s,int k){
    int start=0;
    int end=s-1;
    

    while(start<=end){

        int mid=start+(end-start)/2;

        if(arr[mid]==k){
            return mid;
        }

        if(arr[mid]>start && (arr[mid]>k && arr[start]<k)){
                end=mid-1;
            
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    int  arr[] = {4,5,6,7,0,1,2,3};
    int size=sizeof(arr)/sizeof(int);

    int ans=sea(arr,size,3);

    cout<<ans<<endl;
}