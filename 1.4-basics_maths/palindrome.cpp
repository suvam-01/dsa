#include<iostream>
using namespace std;
int main(){
    int num=121;
    int dup=num;
    int rev=0;
    while(num>0){
        int rem=num%10;
        rev=(rev*10)+rem;
        num/=10;
    }
    if(rev==dup){
        cout<<"is palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    cout<<endl;

}