#include<bits/stdc++.h>
using namespace std;
int peakElement(vector<int>& arr){
    int s=arr.size();

    int start=1;
    int end=s-2;


    if(arr.size()==1){
        return 0;
    }

    if(arr[0]>arr[1]){
        return 0;
    }

    if(arr[s-1]>arr[s-2]){
        return s-1;
    }

    while(start<=end){
        int mid=start+(end-start)/2;


        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        //we are in left
        if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = peakElement(arr);
    cout << "The peak is at index: " << ans << "\n";
    return 0;
}