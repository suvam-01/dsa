#include<bits/stdc++.h>
using namespace std;

void decimal2Binary(int num){
    string res="";
    while(num>0){
        if(num%2==1) res+='1';

        else res+='0';

        num/=2;

    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
}
void binary2Decimal(string num){
    int len=num.length();
    int power=1;
    int n=0;

    for(int i=len-1; i>=0; i--){
        if(num[i]=='1'){
            n+=power;
        }
        power=power*2;
    }
    cout<<n<<endl;

}

int main(){
    int num=13;
    string n="1101";

    decimal2Binary(num);
    binary2Decimal(n);
    
}
