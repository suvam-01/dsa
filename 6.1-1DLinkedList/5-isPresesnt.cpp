#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* next;

    Node(int data,Node* next){
        this->data=data;
        this->next=next;
    }

    Node(int data){
        this->data=data;
        next=nullptr;
    }
};

Node * arrayToLL(vector<int> & arr){

    Node* head=new Node(arr[0],nullptr);
    Node* mover=head;

    for(int i=1; i<arr.size(); i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp; 

    }
    return head;
}

int isPresent(Node* head,int k){
    
    Node* mover=head;

    while(mover){
        if(mover->data==k)  return 1;
        mover=mover->next;
    }
    return 0;
}

int main(){
    vector<int> arr={13,5,7,9,10};
    Node*head=arrayToLL(arr);

    Node*temp=head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    cout<<isPresent(head,90)<<endl;
}