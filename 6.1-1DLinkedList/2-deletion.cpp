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

Node * removeHead(Node* head){
    if(head==NULL) return head ;

    Node*temp=head;
    head=head->next;

    delete temp;

    return head;
}
Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;

    Node* temp=head;

    while(temp->next->next=NULL){
        temp=temp->next;

    }
    delete temp->next;

    temp->next=nullptr;

    return head;
}

Node* removeFromPos(Node* head,int k){
    if(head==NULL) return head;

    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=0;
    Node*prev=NULL;
    Node* temp=head;

    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }

    return head;
}

Node* removeEle(Node* head,int ele){
    if(head==NULL) return head;

    if(head->data==ele){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    Node*prev=NULL;
    Node* temp=head;

    while(temp!=NULL){

        if(temp->data==ele){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }

    return head;
}

int main(){
    vector<int> arr={13,5,7,9,10};

    Node*head=arrayToLL(arr);

    Node* h=removeEle(head,25);

    Node*temp=h;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;


    


}