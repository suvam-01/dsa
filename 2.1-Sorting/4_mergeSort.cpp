#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;

    while(low<=left && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=high){
        temp.push_back(arr[right++]);
    }
    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}
void mergeSort(int arr[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);


}
int main(){
    int arr[]={1,9,2,8,3,5,4};
    int n=sizeof(arr)/sizeof(int);

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    mergeSort(arr,0,n-1);

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    
}