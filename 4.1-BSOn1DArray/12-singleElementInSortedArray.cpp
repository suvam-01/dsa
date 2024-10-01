#include<bits/stdc++.h>
using namespace std;
int singleEle(int arr[],int s){

    if(arr[0]!=arr[1]){
        return arr[0];
    }
    
    if(arr[s-1]!=arr[s-2]){
        return arr[s-1];
    }

    int start=1;
    int end=s-2;


    while(start<=end){
        int mid=start+(end-start)/2;
        
        if((arr[mid]!=arr[mid+1])&& (arr[mid]!=arr[mid-1])){
            return arr[mid];
        }


        if((mid%2==0 && arr[mid]==arr[mid+1]) || (mid%2==1 && arr[mid]==arr[mid-1])){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }

    return -1;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int size=sizeof(arr)/sizeof(int);
    int ans = singleEle(arr,size);
    cout << "The single element is: " << ans << "\n";
    return 0;
}