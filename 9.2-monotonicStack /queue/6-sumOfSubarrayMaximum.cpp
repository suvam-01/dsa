#include<bits/stdc++.h>
using namespace std;

int sumOfSubarrayMaximumBrute(vector<int> &arr){
    int sum=0;

    for(int i=0; i<arr.size(); i++){
        int maxi=arr[i];
        for(int j=i; j<arr.size(); j++){
            maxi=max(arr[j],maxi);
            sum=sum+maxi;
        }
    }
    return sum;
}

vector<int> findNge(vector<int>& arr){
    int s=arr.size();
    vector<int>ans(s,-1);
    stack<int> st;

    for(int i=s-1; i>=0; i--){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        ans[i]=st.empty()?s:st.top();
        st.push(i);
    }
    return ans;
}

vector<int> findPge(vector<int>& arr){
  int s=arr.size();
    vector<int>ans(s,-1);
    stack<int> st;

    for(int i=0; i<s; i++){
        while(!st.empty() && arr[st.top()]<arr[i]){
            st.pop();
        }
        ans[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return ans;
}

void sumOfSubarrayMaximumOptimal(vector<int> &arr){
    int s=arr.size();
    stack<int> st;
    int total=0;
    vector<int> pge=findPge(arr);
    vector<int> nge=findNge(arr);


    for(int i=0; i<s; i++){
        int left=i-pge[i];
        int right=nge[i]-i;
        total=(total+(right*left*arr[i]));
    }
    cout<<total<<endl;

}


int main(){
    vector<int> arr={1,4,6,7,3,7,8,1};
    // int ans= sumOfSubarrayMaximumBrute(arr);
    // cout<<ans<<endl;
    sumOfSubarrayMaximumOptimal(arr);
}