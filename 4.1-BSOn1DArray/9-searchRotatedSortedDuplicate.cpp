#include<bits/stdc++.h>
using namespace std;
int sea(int arr[],int s,int k){
    int start=0;
    int end=s-1;

    while(start<end){
        int mid=start+(end-start)/2;

        if(arr[mid]==k){
            return mid;
        }

        if(arr[start]==arr[mid] && arr[mid]==arr[end]){
            start++;
            end--;
        }

        if(arr[start]<=arr[mid]){
            if(arr[mid]>=k && arr[start]<=k){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]>=k && arr[end]<=k){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

        }
    }
    return -1;
}
int main(){
    int  arr[] = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int size=sizeof(arr)/sizeof(int);

    cout<<sea(arr,size,3)<<endl;
}