#include<bits/stdc++.h>
using namespace std;
int mini(int arr[],int s){
    int start=0;
    int end=s-1;
    int ans=INT_MAX;

    while(start<end){
        int mid=start+(end-start)/2;


        if(arr[mid]>arr[start]){
            ans=min(ans,arr[start]);        //keep the minimum and elimunate left half
            start=mid+1;

        }

        else{
            ans=min(ans,arr[mid]);
            end=mid-1;                      //keep the minimum and eliminate right half

        }
    }

    return ans;
}
int main(){
    int arr[]={3,4,5,0,2};
    int size=sizeof(arr)/sizeof(int);

    cout<<mini(arr,size)<<endl; //Time Complexity: O(logN), N = size of the given array.
                                //Space Complexity: O(1).

}