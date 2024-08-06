#include<iostream>
using namespace std;
int po(int num,int p){
    
    int t=1;
    while(p){
        t=t*num;
        p--;
    }
    return t;
}
int main(){
    int num=1593;
    int dup=num;
    int dup1=num;
    int count=0;
    int sum=0;

    while(num>0){
        num/=10;
        count++;
    }

    while(dup>0){
        int rem=dup%10;
        int j=po(rem,count);
        sum=sum+j;
        dup/=10;
    }
    if(dup1==sum){
        cout<<"is armstrong";
    }
    else{
        cout<<"isn't armstrong";

    }

    cout<<endl;


}