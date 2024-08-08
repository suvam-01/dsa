#include<iostream>
using namespace std;
bool isPalindrome(int i,string str, int n){
    if (i>=n/2)
    {
          return true;
    }
    

    if(str[i]!=str[n-i-1]) return false;

    return isPalindrome(i+1,str,n);
}
int main(){
    bool ans=isPalindrome(0,"madam",5);
    if(ans){
        cout<<"true"<<endl;
    }
    else cout<<"false"<<endl;
}