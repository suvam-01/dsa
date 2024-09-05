#include<bits/stdc++.h>
using namespace std;

int main(){
    int  arr[] = {2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    for(int i=1; i<n;i++){
        if(arr[i]<=arr[i-1]){
            cout<<"false"<<endl;
            exit(0);
        }
    }
    cout<<"true"<<endl;

}