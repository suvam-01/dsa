#include<bits/stdc++.h>
using namespace std;

void clearKthBit(int num,int i){
    num=(num^(~(1<<i)));
    cout<<num;
}

void setKthBit(int a,int k){
    int num=((1<<k)|a);
    cout<<num;
}

void clearKthBit(int a, int k){
    int ans=a&~(1<<k);
    cout<<ans;
}

int main(){
    int num=13;
    int i=0;
    int a=(num&(~(1<<i)));
    cout<<a;

}