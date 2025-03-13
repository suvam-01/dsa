#include<bits/stdc++.h>
using namespace std;

void nseBrute(vector<int> &arr){
    int s=arr.size();
    vector<int>ans(s,-1);

    for(int i=0; i<s; i++){
        for(int j=i-1; j>=0; j--){
            if(arr[j]<arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }
    for( auto it: ans){
        cout<<it<<" ";
    }


}

void nseOptimal(vector<int> &arr){
    int s=arr.size();
    vector<int>ans(s,-1);
    stack<int> st;

    for(int i=0; i<s; i++){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        ans[i]=st.empty()?-1:st.top();
        st.push(arr[i]);
    }
    for( auto it: ans){
        cout<<it<<" ";
    }
}

int main(){
    vector<int> arr={4,5,2,10,8};
    nseOptimal(arr);

}