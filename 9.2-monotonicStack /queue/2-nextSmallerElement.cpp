#include<bits/stdc++.h>
using namespace std;

void nse(vector<int> &arr){
    int s=arr.size();
    vector<int> nse(s,-1);
    stack<int> st;

    for(int i=s-1; i>=0; i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        nse[i]=st.empty()?-1:st.top();
        st.push(arr[i]);
    }
    for( auto it: nse){
        cout<<it<<" ";
    }
}

int main(){
    vector<int> arr={1,3,4,2,6};
    nse(arr);

}