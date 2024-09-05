#include<bits/stdc++.h>
using namespace std;
void brute(int arr[],int n){
    vector<int> temp;
    
    for(int i=0; i<n; i++){                 //O(n)
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0; i<temp.size(); i++){
        arr[i]=temp[i];                     //O(x)  =>x is the number of non zero ele
    }

    for(int i=temp.size();i<n;i++){         //O(n-x) =>number of zeroes
        arr[i]=0;
    }

    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void optimal(int arr[],int n){
    int j=-1;
    for(int i=0;i <n; i++ ){        //O(x)
        if(arr[i]==0){
            j=i;
            break;
        }
    }


    for(int i=j+1; i<n ; i++){  //O(n-x)
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    int n=sizeof(arr)/sizeof(int);

    brute(arr,n);   //O(2n)         space=>O(x)=>O(n) if every ee is non zero
    optimal(arr,n); //O(n)          space=>O(1)
 
}