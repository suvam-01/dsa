#include<iostream>
using namespace std;

void printFun(int n){
    if(n==0){
        return;
    }

    cout<<n<<" ";
    printFun(n-1);

}
int main(){
    int n=10;
    printFun(n);
}