#include<iostream>
using namespace std;
int main(){
    string st="ababbcca";

    int hash[26]={0};

    for(int i=0; i<st.length(); i++){
        char ch=st[i];
        hash[(ch-'a')]+=1;
    }


    for(int i=0; i<26; i++){
        // char ch=st[i];
        
        if(hash[i]>0){
            cout<<(char)(i+'a') <<":"<<hash[i]<<endl;
        }
    }

}