#include<iostream>
using namespace std;
int main(){
    int num=134;
    int rev=0;
    while(num>0){
        int rem=num%10;
        rev=(rev*10)+rem;
        num/=10;
    }
    cout<<rev<<endl;
}