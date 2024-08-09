#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,1,3};
    int hash[13]={0};

    for(int i=0; i<5 ; i++){
        hash[arr[i]]+=1;
    }

    for(int i=0; i<13; i++){
        if(hash[i]!=0){
            cout<<i<<" "<<hash[i]<<endl;
        }
    }
}