#include<bits/stdc++.h>
using namespace std;


void sumSubarrayMinimumBrute(vector<int>& arr){
    int s=arr.size();
    int sum=0;
    
    for(int i=0; i<s; i++){
        int mini=arr[i];
        for(int j=i; j<s; j++){
            mini=min(arr[j],mini);
            sum=sum+mini;
        }
        
    }
    cout<<sum<<endl;
}

vector<int> findNse(vector<int>& arr){
    int s=arr.size();
    vector<int>ans(s,-1);
    stack<int> st;

    for(int i=s-1; i>=0; i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        ans[i]=st.empty()?s:st.top();
        st.push(i);
    }
    return ans;
}
vector<int> findPse(vector<int>& arr){
  int s=arr.size();
    vector<int>ans(s,-1);
    stack<int> st;

    for(int i=0; i<s; i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        ans[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return ans;
}

void sumSubarrayMinimumOptimal(vector<int>& arr){
 vector<int> nse=findNse(arr);
 vector<int> pse=findPse(arr);

 int total=0;
 for(int i=0; i<arr.size(); i++){
    int left=i-pse[i];
    int right=nse[i]-i;
    total=(total+(right*left*arr[i]));
}
 cout<<total<<endl;

}

int main(){
    vector<int> arr={1,4,6,7,3,7,8,1};
    sumSubarrayMinimumOptimal(arr);

}