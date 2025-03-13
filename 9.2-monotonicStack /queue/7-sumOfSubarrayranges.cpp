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

int sumSubarrayMinimumBrute(vector<int>& arr){
    int s=arr.size();
    int sum=0;
    
    for(int i=0; i<s; i++){
        int mini=arr[i];
        for(int j=i; j<s; j++){
            mini=min(arr[j],mini);
            sum=sum+mini;
        }
        
    }
    return sum;
}

void sumOfSubarrayRangesbrute(vector<int>& arr){
    int largest=sumOfSubarrayMaximumBrute(arr);
    int smallest=sumSubarrayMinimumBrute(arr);

    int ans=largest-smallest;
    

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

int sumSubarrayMinimumOptimal(vector<int>& arr){
 vector<int> nse=findNse(arr);
 vector<int> pse=findPse(arr);

 int total=0;
 for(int i=0; i<arr.size(); i++){
    int left=i-pse[i];
    int right=nse[i]-i;
    total=(total+(right*left*arr[i]));
}
return total;

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

int sumOfSubarrayMaximumOptimal(vector<int> &arr){
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
    return total;

}

int sumOfSubarrayRangesOptimal(vector<int>& arr){
    int maximums=sumOfSubarrayMaximumOptimal(arr);
    int minimums=sumSubarrayMinimumOptimal(arr);

    int ans=maximums-minimums;
    return ans;

}
int main(){
    vector<int> arr={1,4,6,7,3,7,8,1};
    int ans=sumOfSubarrayRangesOptimal(arr);

    cout<<ans<<endl;

}