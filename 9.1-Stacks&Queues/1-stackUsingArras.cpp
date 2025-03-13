#include<bits/stdc++.h>
using namespace std;

class Stack{
    int top=-1;
    int st[10];
    

    public:
    void push(int x){
        if(top>=10) {
            cout<<"stack full";
            return;
        }
        top++;
        st[top]=x;
        
    }
    void pop(){
        if(top==-1) {
            cout<<"stack empty";
            return;
        }
        top--;

    }
    int Top(){
        if(top==-1) {
            cout<<"stack empty";
            return -1;
        }
        return st[top];
    }
    int size(){
        return top+1;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(14);
    st.pop();

    cout<<st.Top()<<endl;
    cout<<st.size()<<endl;
    st.push(14);
    cout<<st.Top()<<endl;
    cout<<st.size()<<endl;


}