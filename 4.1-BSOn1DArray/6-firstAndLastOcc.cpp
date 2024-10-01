#include<bits/stdc++.h>
using namespace std;
int first(int arr[],int s,int k){
    int start=0; 
    int end=s-1;
    int ana;
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==k){
            ana=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }

    return ana;

}

int last(int arr[],int s,int k){
    int start=0; 
    int end=s-1;
    int ana;
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==k){
            ana=mid;
            start=mid+1;

        }
        else{
            end=mid-1;

        }

    }

    return ana;
}
int main(){
    int  arr[] = {3,4,13,13,13,20,40};
    int size=sizeof(arr)/sizeof(int);

    cout<<first(arr,size,13)<<" ";
    cout<<last(arr,size,13)<<endl;

}