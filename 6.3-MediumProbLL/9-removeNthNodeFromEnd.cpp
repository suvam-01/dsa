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

Node* removeFromEndBrute(Node* head,int n){
    Node* temp = head;
    int count=0;

    while(temp){
        count++;
        temp=temp->next;
    }

    if(count==n){
        Node* newNode=head->next;
        delete head;
        return newNode;
    }

    temp=head;
    int pos=count-n;

    while(temp){
        pos--;

        if(pos==0){
            break;
        }

        temp=temp->next;
        
    }

    Node* delNode=temp->next;
    temp->next=temp->next->next;
    delete delNode;

    return head;
}
Node* removeFromEnd(Node* head,int n){
    Node* fast=head;
    Node* slow=head;


    for(int i=0; i<n; i++){
        fast=fast->next;
    }
    if(fast==NULL){
        return head->next;
    }

    while(fast->next){
        fast=fast->next;
        slow=slow->next;
    }


    Node* delNode=slow->next;
    slow->next=slow->next->next;
    delete delNode;
    return head;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node*head=convert2LL(arr);
    print(head);

    Node* h1=removeFromEnd(head,5);
    print(h1);
    

}