#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* next;


    Node(int data, Node*next){
        this->data=data;
        this->next=next;
    }

    Node(int data){
        this->data=data;
        next=nullptr;
    }
};


Node * convert2LL(vector<int> & arr){

    Node* head=new Node(arr[0],nullptr);
    Node* mover=head;

    for(int i=1; i<arr.size(); i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp; 

    }
    return head;
}
void print(Node*head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}

Node* reverseLlBrute(Node*head){
    Node* temp=head;
    stack<int> st;

    while(temp){
        st.push(temp->data);
        temp=temp->next;
    }

    temp=head;

    while(temp){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
}

Node* reverseLl(Node* head){
    Node* temp=head;
    Node* prev=NULL;

    while(temp){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
    
}

int main(){
    vector<int> arr={1,2,3,4,5};
    Node*head=convert2LL(arr);
    print(head);

    Node* h1=reverseLl(head);
    print(h1);
    

}