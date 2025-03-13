#include<bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
    stack<char> st;

// Process each digit
for (char digit : num) {
   while (!st.empty() && k > 0 && st.top() > digit) {
       st.pop();
       k--;
   }
   st.push(digit);
}

// Remove remaining k digits from the top
while (k > 0 && !st.empty()) {
   st.pop();
   k--;
}

// Build the result string from the stack
string res = "";
while (!st.empty()) {
   res += st.top();
   st.pop();
}

// Reverse since stack stores in reverse order
reverse(res.begin(), res.end());

// Remove leading zeros
while (!res.empty() && res.front() == '0') {
   res.erase(res.begin());
}

// If empty, return "0"
return res.empty() ? "0" : res;
}
int main(){
    string s="10200";
    int k=3;

    string ans=removeKdigits(s,k);

    cout<<ans<<endl;
}