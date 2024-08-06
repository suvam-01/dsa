#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num=36;

    for(int i=1; i<=num; i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }

    for(int i=1; i<=sqrt(num);i++){
        if(num%i==0) {
            cout<<i<<" ";
        if((num/i)!=i) cout<<num/i<<" ";
        }

    }



}