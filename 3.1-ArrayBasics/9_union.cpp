#include<bits/stdc++.h>
using namespace std;
void brute(int arr1[],int arr2[],int s1,int s2){
    set<int> st;

    for(int i=0; i<s1; i++){    //O(s1 logn)
        st.insert(arr1[i]);
    }

    for(int i=0; i<s2; i++){    //O(s2 logn)
        st.insert(arr2[i]);

    }

    int merged[st.size()];
    int i=0;
    for(auto it: st){       //O(s1+s2)  =>if every elements  is unique in both the array
        merged[i]=it;
        i++;
    }

    for(int i=0; i<st.size(); i++){
        cout<<merged[i]<<" ";
    }
    cout<<endl;
}

void optimal(int arr1[],int arr2[],int s1,int s2){
    int i=0;
    int j=0;
    vector<int> v;
    while(i<s1 && j<s2){
        if(arr1[i]<=arr2[j]){
            if(v.size()==0 || v.back()!=arr1[i]){
                v.push_back(arr1[i]);
            }
            i++;
           
        }

        else{
            if(v.size()==0 || v.back()!=arr2[j]){
                v.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<s1){
        if(v.size()==0 || v.back()!=arr1[i]){
                v.push_back(arr1[i]);
        }
        i++;
    }
    while(j<s2){
        if(v.size()==0 || v.back()!=arr2[j]){
                v.push_back(arr2[j]);
        }
        j++;
    }

    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[]={2,3,4,4,5,6};
    int arr2[]={1,1,2,3,4,5};

    int s1=sizeof(arr1)/sizeof(int);
    int s2=sizeof(arr2)/sizeof(int);

    brute(arr1,arr2,s1,s2);         //T.c => O(s1 logn +s2 logn) + O(s1+s2)
                                    //s.c => O(s1+s2) + O(s1+s2) =>> onr for storing in the set and another to return the array

    optimal(arr1,arr2,s1,s2);       //T.c =>  O(s1+s2)
                                    //s.c => O(s1+s2)  =>>  to return the answer array
}