#include<bits/stdc++.h>
using namespace std;

int SingleNumberBrute(vector<int >&arr){//Hashing
    map<int,int> mpp;

    for(int i=0; i<arr.size(); i++){
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;
}

int SingleNumberOptimal(vector<int>&arr){
    int x=0;

    for(int i=0; i<arr.size(); i++){
        x=x^arr[i];
    }
    return x;

}

int main(){
   vector<int>arr{4,1,2,1,2};

   int ans=SingleNumberOptimal(arr);
   cout<<ans<<endl;

}