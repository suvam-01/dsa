#include<bits/stdc++.h>
using namespace std;

int main(){
    int  arr[] = {2,5,1,3,0};
    int n=sizeof(arr)/sizeof(int);
    
    int maxi=INT_MIN;
    int smaxi=INT_MIN;

    for(int i=0; i<n ; i++){
        if(arr[i]>maxi){
            smaxi=maxi;
            maxi=arr[i];
        }
        else if(arr[i]<maxi && arr[i]>smaxi){
            smaxi=arr[i];
        }
    }

    cout<<"largest "<<maxi<<endl<<"second largest "<<smaxi<<endl;

}