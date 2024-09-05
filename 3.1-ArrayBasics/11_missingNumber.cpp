#include<bits/stdc++.h>
using namespace std;

int brute(int arr[], int N, int size){
    for(int i=1; i<=N; i++){    //O(n)
        bool flag=0;
        for(int j=0; j<size; j++){      //O(n)
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

int better(int arr[], int N, int size){    
    int hash[N+1]={0};

    for(int i=0; i<size; i++){      //  O(n)
        hash[arr[i]]=1;
    }
    int ans;
    for(int i=1; i<N+1; i++){       //  O(n)
        if(hash[i]==0){
            ans=i;
        }
    }
    return ans;
}

int optimal(int arr[], int N, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }

    int num=N*(N+1)/2;

    return (num-sum);

}

int main(){
    int arr[]={1,2,4,5};
    int N=5;

    int s=sizeof(arr)/sizeof(int);

    // int ans=better(arr,N,s);


    brute(arr,N,s);     //  T.c==>O(n^2)        S.c==>O(1)


    better(arr,N,s);    //T.c=>O(n)+O(n) ==>O(2n)       S.c==>O(1)


    optimal(arr,N,s);   //T.C ==>O(n)   S.c==>O(1)


    
}