#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q;

    public:
    void Push(int val){
        int s=q.size();
        q.push(val);

        for(int i=0; i<s; i++){
            q.push(q.front());
            q.pop();

        }
    }
    void Pop(){
        q.pop();
    }
    int Top(){
       return q.front();

    }
    int Size(){
       return q.size();

    }
};

int main(){
    Stack st;
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(14);
    st.Pop();

    cout<<st.Top()<<endl;
    cout<<st.Size()<<endl;
    st.Push(14);
    cout<<st.Top()<<endl;
    cout<<st.Size()<<endl;

}