#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack <int> st1;
    stack <int> st2;

    public:

    void Push(int val){
        while(st1.size()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(val);
        while(st2.size()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    void Pop(){
       st1.pop();

    }
    int Top(){
        return st1.top();

    }
    int Size(){
        return st1.size();

    }
};
int main(){
    Queue q;
    q.Push(1);
    q.Push(2);
    q.Push(3);
    q.Push(14);
    q.Pop();

    cout<<q.Top()<<endl;
    cout<<q.Size()<<endl;
    q.Push(14);
    cout<<q.Top()<<endl;
    cout<<q.Size()<<endl;

}