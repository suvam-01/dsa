#include<bits/stdc++.h>
using namespace std;

int upperB(int arr[],int s,int key){
    int start=0;
    int end=s-1;
 
    
    while(start<end){

        int mid=start+(end-start)/2;

        if(arr[mid]>=key){

            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }

    return start;
}

int main(){
    int arr[]={1,2,2,3};
    int size=sizeof(arr)/sizeof(int);

    cout<<upperB(arr,size,2)<<endl;
}