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
Node* add1LlIterative(Node* head){
    int carry=1;
    
    Node* h=reverseLl(head);
    Node* temp=h;
    while(temp){
        temp->data=temp->data+carry;
        if(temp->data<10){
            carry=0;
            break;
        }

        else{
            temp->data=0;
            carry=1;
        }

        temp=temp->next;

    }

    if(carry==1){
        head=reverseLl(h);
        Node* newNode=new Node(carry,head);
        return newNode;
    }
    head=reverseLl(h);
    return head;
}
int addHelper(Node* temp){

    if(temp==NULL){
        return 1;
    }
    int carry=addHelper(temp->next);

    temp->data=temp->data+carry;

    if(temp->data<10){
        return 0;
    }
    temp->data=0;
    return 1;
}

Node* add1Ll(Node* head){

    int carry=addHelper(head);
    if(carry==1){
        Node* newNode=new Node(carry);
        newNode->next=head;
        head=newNode;
    }
    return head;
}

int main(){

    vector<int> arr={9,9,9};
    Node*head=convert2LL(arr);
    print(head);
    Node* h1=add1Ll(head);
    print(h1);
}