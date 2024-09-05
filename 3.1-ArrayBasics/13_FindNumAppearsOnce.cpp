#include<bits/stdc++.h>
using namespace std;

int brute(int arr[],int n){
    for(int i=0; i<n;i++){
        int num=arr[i];
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count==1){
            return num;
        }
    }
}

int better(int arr[],int n){
    int maxi=0;
    for(int i=0; i<n; i++){
        maxi=max(arr[i],maxi);
    }
    int hash[maxi]={0};

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<=maxi; i++){
        if(hash[i]==1){
            return i;
        }
    }
}
int optimal(int arr[],int n){
    int x=0;

    for(int i=0; i<n; i++){
        x=x^arr[i];
    }

    return x;
}


int main(){

    int arr[]={1,1,2,2,3,4,4,5,5};
    int n=sizeof(arr)/sizeof(int);


    brute(arr,n);               //  T.c==>O(n^2)        S.c==>O(1)

   cout<< better(arr,n);       //  T.c==>O(3n)        S.c==>O(maxi)

    optimal(arr,n);           //  T.c==>O(n)        S.c==>O(1)

}