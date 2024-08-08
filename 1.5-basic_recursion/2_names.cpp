#include<iostream>
using namespace std;
void printNames(int n){
    if(n==5){
        return;
    }
    printNames(n+1);
    cout<<"hi ";

}
int main(){
    int n=0;
    printNames(n);
}