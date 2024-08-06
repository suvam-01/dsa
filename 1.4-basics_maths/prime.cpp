#include<iostream>

using namespace std;
void isPrime(int num){
    int count=0;
    for(int i=1;i*i<=num; i++){
        if((num%i==0)){
            count++;
            if((num/i)!=i) count++;

        }
    }

    if(count==2){
        cout<<" is prime";

    }
    else{
        cout<<" is not prime";

    }
}
int main(){
    int num=11;
    int count=0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<" is prime";
    }
    else{
        cout<<" is not prime";
    }

    
}