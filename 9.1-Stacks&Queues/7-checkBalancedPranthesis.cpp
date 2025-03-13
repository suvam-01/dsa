#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    stack<char> st;

    for(int i=0; i<s.length();i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            char top = st.top();
            if ((s[i] == ')' && top == '(') ||
                (s[i] == '}' && top == '{') ||
                (s[i] == ']' && top == '[')) {
                st.pop();
            } 
                else{
                    return false;
                }
        }
        
    }
    return st.empty();
}
int main(){
    string s="()";
    cout<<isValid(s);

}