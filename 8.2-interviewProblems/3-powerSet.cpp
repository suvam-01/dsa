#include<bits/stdc++.h>
using namespace std;

void powerSet(vector<int>& nums){

    vector<vector<int>> ans1;
    int n=nums.size();
    int k=1<<n;

    for(int i=0; i<k; i++){
        vector<int>ans;
        for(int j=0;j<nums.size(); j++){
            if(i&(1<<j)){
                ans.push_back(nums[j]);
            }
        }
        ans1.push_back(ans);

    }
    for(int i=0; i<ans1.size(); i++){
        for(int j=0; j<ans1[i].size(); j++){
            cout<<ans1[i][j]<<" ";
        }
    }

}

int main(){
    vector<int> nums{1,2,3};
    powerSet(nums);
}