#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=1;
    int b=10;


    cout<<a<<" "<<b<<endl;
    a=(a^b);
    b=(a^b);
    a=(a^b);

    cout<<a<<" "<<b<<endl;
 
}