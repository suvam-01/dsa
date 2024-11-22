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

Node* insertHead(Node* head, int val){
    return new Node(val,head);
}
Node* insertTail(Node* head,int val){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(val);
    return head;
}

Node* insertAtPos(Node* head,int pos,int val){
    if(head==NULL){
        if(pos==1){
            return new Node(val);
        }
    }

    if(pos==1){
        return new Node(val,head);
    }

    int count=0;
    Node* temp=head;

    while(temp){
        count++;
        if(count==pos-1){
            Node* newNode=new Node(val,temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;

}

Node* insertBeforeEle(Node* head,int ele ,int val){
    if(head==NULL){
        return NULL;
    }

    if(head->data==ele){
        return new Node(val,head);
    }


    Node* temp=head;

    while(temp->next){

        if(temp->next->data==ele){
            Node* newNode=new Node(val,temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;

}
int main(){
    vector<int> arr={13,5,7,9,10};

    Node*head=arrayToLL(arr);
    
    head=insertBeforeEle(head,13,100);

    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
