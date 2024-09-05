#include<bits/stdc++.h>
using namespace std;

void brute(int arr[],int n){
    set<int> s;
    for(int i=0; i<n; i++)
    {
        s.insert(arr[i]);   //O(nlogn)
    }
    int index=0;
    for(auto it:s){
        arr[index]=it;      //O(n)
        index++;
    }


    cout<<index<<endl;
}

void optimal(int arr[],int n){
    int j=0;
    for(int i=1; i<n ; i++){        //O(n)
        if(arr[i]!=arr[j]) {
            arr[j+1]=arr[i];
            j++;
        }
    }
    cout<<j+1<<endl;
}

int main(){
    int  arr[] = {2,2,3,4,4,4,5,6};
    int n=sizeof(arr)/sizeof(int);

    brute(arr,n);           //O(nlogn+n)
    optimal(arr,n);         //O(n)
}