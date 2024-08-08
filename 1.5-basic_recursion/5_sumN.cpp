#include<iostream>
using namespace std;

int sum(int num,int s){
    if(num==0){
        return s;
    }
    
    s=s+num;
    return sum(num-1,s);

}

int main(){
    int ana=sum(10,0);
    cout<<ana<<endl;
}