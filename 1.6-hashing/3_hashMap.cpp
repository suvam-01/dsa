#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={1,2,3,1,3,2,12};

    map<int,int>mpp;

    for(int i=0; i<7;i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
}