#include<bits/stdc++.h>
using namespace std;

void asteroidCollision(vector<int>& arr){

    vector<int>ans;

    for(int i=0;i<arr.size(); i++){
        if(arr[i]>0) ans.push_back(arr[i]);
        else{
            while(!ans.empty() && ans.back()>0 && ans.back()<abs(arr[i])){
                ans.pop_back();
            }
            if(!ans.empty() && ans.back()==abs(arr[i])){
                ans.pop_back();
            }
            else if(ans.empty() or  ans.back()<0){
                ans.push_back(arr[i]);
            }
        }
    }
    
    for(auto it:ans){
        cout<<it<<" ";
    }
    
}

int main(){
    vector<int> arr={4,7,1,1,2,-3,-7,1,15,-16};
    asteroidCollision(arr);
}