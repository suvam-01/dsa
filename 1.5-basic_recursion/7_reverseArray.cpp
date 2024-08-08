#include<iostream>
using namespace std;

void reverse(int i,int arr[],int n){
    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);

    reverse(i+1,arr,n);
}
int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    reverse(0,arr,5);
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}