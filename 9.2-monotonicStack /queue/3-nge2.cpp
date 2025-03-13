#include<bits/stdc++.h>
using namespace std;
void nge2Brute(vector<int>&arr){
    int s=arr.size();
    vector<int>ans(s,-1);
    int index=0;

    for(int i=0; i<s; i++){
        for(int j=i+1; j<i+s-1;j++){ //to calculate the circular index
            index=j%s;
            if(arr[index]>arr[i]){
                ans[i]=arr[index];
                break;
            }
        }
    }
    for( auto it: ans){
        cout<<it<<" ";
    }

}

void nge2Optimal(vector<int>&arr){
    int s=arr.size();
    vector<int>ans(s,-1);
    stack<int> st;

    for(int i=2*s-1; i>=0; i--){
        while(!st.empty() && st.top()<=arr[i%s]){
            st.pop();
        }
        if(i<s){
            ans[i]=st.empty()?-1:st.top();
        }
        st.push(arr[i%s]);
    }
    for( auto it: ans){
        cout<<it<<" ";
    }
}
int main(){
    vector<int> arr={2,10,12,1,11};
    // nextGreaterElementBrute(arr);
    cout<<endl;
    nge2Optimal(arr);

}