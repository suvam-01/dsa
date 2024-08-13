#include<bits/stdc++.h>
using namespace std;

int p(int arr[],int low,int high){
    int i=low;
    int j=high;

    int pivot=arr[low];

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(int arr[],int low,int high){
    if(low<high){
        int pIndex=p(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}


int main(){
    int arr[]={13,46,24,52,9,3};
    int n=sizeof(arr)/sizeof(int);

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    qs(arr,0,n-1);

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

//T.C => O(n*logn)
//s.c => O(1)