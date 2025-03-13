#include<bits/stdc++.h>
using namespace std;

class Queue{
    int start=-1;
    int end=-1;
    int arr[10];
    int currSize=0;
    public:

    void push(int x){
        if(currSize==10) return;
        if(currSize==0){
            start=end=0;
        }
        else{
            end=(end+1)%10;
        }
        arr[end]=x;
        currSize++;
    }
    int pop(){
        if(currSize==0) return -1;
        int ele=arr[start];
        if(currSize==1){
            start=end=-1;
            return ele;
        }
        else{
            start=(start+1)%10;
        }
        currSize--;
        return ele;
    }
    int Top(){
        if(currSize==0) return -1;
        return arr[start];

    }
    int size(){
        return currSize;
    }

};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(14);
    q.pop();

    cout<<q.Top()<<endl;
    cout<<q.size()<<endl;
    q.push(14);
    cout<<q.Top()<<endl;
    cout<<q.size()<<endl;


}