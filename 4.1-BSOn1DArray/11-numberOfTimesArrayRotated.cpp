#include<bits/stdc++.h>
using namespace std;
int findMin(int arr[],int s){
    int start=0;
    int end=s-1;
    int ans=INT_MAX;
    int index=-1;


    while(start<end){
        int mid=start+(end-start)/2;

        if(arr[mid]>arr[start]){


            if(arr[start]<ans){
                index=start;
                ans=arr[start];

            }
            
            start=mid+1;
        }
        else{
            if(arr[mid]<ans){
                index=mid;

                ans=arr[mid];
            }
            end=mid-1;
        }
    }
    return index;
    
}
int main(){
    int arr[]={4,5,6,7,0,1,2,3};
    int size=sizeof(arr)/sizeof(int);

    cout<<findMin(arr,size)<<endl;
}