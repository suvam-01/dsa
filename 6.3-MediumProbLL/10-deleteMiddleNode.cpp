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

Node* deleteMiddleBrute(Node* head){
    int cnt=1;
    Node* temp=head;

    while(temp){
        cnt++;
        temp=temp->next;
    }

    int mid=cnt/2;
    temp=head;

    while(temp){
        mid--;
        if(mid==0){
            Node* delNode=temp->next;
            temp->next=temp->next->next;
            delete delNode;
            return head;
        }
        temp=temp->next;

    }
    return NULL;
}

Node* deleteMiddle(Node* head){
    Node* slow=head;
    Node* fast=head;

    fast=fast->next->next;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* delNode=slow->next;
    slow->next=slow->next->next;
    delete delNode;
    return head;

}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    Node*head=convert2LL(arr);
    print(head);

    Node* h1=deleteMiddle(head);
    print(h1);
    

}