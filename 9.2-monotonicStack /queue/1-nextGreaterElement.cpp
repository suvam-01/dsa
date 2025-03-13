#include<bits/stdc++.h>
using namespace std;

void nextGreaterElementBrute(vector<int>&arr){
    int s=arr.size();
    vector<int>ans;

    for(int i=0; i<s; i++){
        bool found=false;
        for(int j=i+1; j<s; j++){
            if(arr[j]>arr[i]){
                ans.push_back(arr[j]);
                found=true;
                break;
            }
        }
        if(!found)
            ans.push_back(-1);
    }
    for( auto it: ans){
        cout<<it<<" ";
    }

}

void Optimal(vector<int> &arr){
    int s=arr.size();
    vector<int> nge(s, -1);
    stack<int> st;

    for(int i=s-1; i>=0; i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        nge[i]=st.empty()?-1:st.top();
        st.push(arr[i]);
    }

    for( auto it: nge){
        cout<<it<<" ";
    }
    
}
int main(){
    vector<int> arr={1,3,4,2,6};
    // nextGreaterElementBrute(arr);
    cout<<endl;
    Optimal(arr);

}