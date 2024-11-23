#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* next;
    Node* back;

    Node(int data, Node*next, Node* back){
        this->data=data;
        this->next=next;
        this->back=back;
    }

    Node(int data){
        this->data=data;
        next=nullptr;
        back=nullptr;
    }
};


Node* convertArr2Dll(vector <int>&arr){
    Node* head=new Node(arr[0]);
    Node*prev=head;

    for(int i=1;i<arr.size(); i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
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

Node* reverseDllBrute(Node* head){
    stack<int> st;

    Node* temp=head;

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
    return head;
}

Node* reverseDll(Node* head){
    Node* curr=head;
    Node* prev=NULL;

    while(curr){
        prev=curr->back;
        curr->back=curr->next;
        curr->next=prev;

        curr=curr->back;
    }
    return prev->back;
}

int main(){
    vector<int> arr={13,5,7,9,10};
    Node* h=convertArr2Dll(arr);


    print(h);
    cout<<endl;
    Node* h1=reverseDll(h);
    print(h1);


}