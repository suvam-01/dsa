#include<bits/stdc++.h>
using namespace std;
void brute(int arr[], int n,int d){
    d=d%n;
    int temp[d];
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
    for(int i=0; i<d; i++){
        temp[i]=arr[i];
    }

    for(int i=d; i<n;i++){
        arr[i-d]=arr[i];
    }
    int k=0;
    for(int i=n-d; i<n; i++){
        arr[i]=temp[k++];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}

void better(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

    for(int i=0; i<n; i++){ 
        cout<<arr[i]<<" ";
    }

    //T.C=>O(N);
}
int main(){
    int  arr[] = {1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int d=3;

    // brute(arr,n,d);

    better(arr,n,d);
}