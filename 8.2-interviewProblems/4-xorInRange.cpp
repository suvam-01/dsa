#include<bits/stdc++.h>
using namespace std;
int brute(int n){
    int r=0;

    for(int i=0; i<=n; i++){
        r=r^i;
    }
    return r;

}

int optimized(int n){
    if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else if(n%4==3) return 0;
    else return n;
}
int followUp(int L,int R){
    return brute(L-1)^brute(R);
}
int main(){
    int ans=followUp(3,9);
    cout<<ans<<endl;
}