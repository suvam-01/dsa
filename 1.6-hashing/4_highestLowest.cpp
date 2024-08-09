#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,2,2,2,3,3,4,4,4};
    int size=sizeof(arr)/sizeof(int);
    int mini=0;
    int maxi=0;

    unordered_map<int,int> mpp;

    for(int i=0; i<size; i++){
        mpp[arr[i]]++;
    }
    int max=INT_MIN;
    int min=INT_MAX;

    for(auto it:mpp){
        
        if(it.second<min){
            min=it.second;
            mini=it.first;
            
        }
        else if(it.second>max){
            max=it.second;
            maxi=it.first;
        }
    }
   
    cout<<maxi<<" "<<mini<<endl;
}