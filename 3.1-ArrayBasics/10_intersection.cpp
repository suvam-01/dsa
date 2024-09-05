#include<bits/stdc++.h>
using namespace std;

void optimal(int arr1[],int arr2[],int s1,int s2){
    vector<int>v;
    int i=0;
    int j=0;
    while(i<s1 && j<s2){
        if(arr1[i]==arr2[j]){
            v.push_back(arr1[i]);
        }
        if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[]={2,3,4,4,5,6};
    int arr2[]={1,1,2,3,4,5};

    int s1=sizeof(arr1)/sizeof(int);
    int s2=sizeof(arr2)/sizeof(int);
    

    optimal(arr1,arr2,s1,s2);    //T.c =>  O(s1+s2)
                                 //s.c => O(s1+s2)  =>>  to return the answer array

}