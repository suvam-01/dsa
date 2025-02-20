#include<bits/stdc++.h>
using namespace std;

int numberToFlip(int start,int goal){
    int a=start^goal;
    int cnt=0;

    while(a!=0){
        if(a&1){
            cnt++;
        }
        a=a>>1;
    }
    return cnt;
}

int main(){
    int ans=numberToFlip(31,0);
    cout<<ans<<endl;
}