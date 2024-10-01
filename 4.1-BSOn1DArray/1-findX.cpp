#include<bits/stdc++.h>
using namespace std;

int BS(int arr[],int s,int key){
    int start=0;
    int end=s-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(arr[mid]==key){
            return mid+1;
        }

        if(arr[mid]>key){
            end=mid-1;
        }

        else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size=sizeof(arr)/sizeof(int);

    int ans=BS(arr,size,50);


    cout<<ans<<endl;

}