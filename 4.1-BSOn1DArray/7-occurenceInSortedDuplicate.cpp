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
    int  arr[] = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int size=sizeof(arr)/sizeof(int);

    int f=first(arr,size,3);
    int l=last(arr,size,3);
    cout<<l-f+1<<endl;
}