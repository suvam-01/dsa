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


Node * Convert2LL(vector<int> & arr){

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

Node* seggregateOddEvenBrute(Node* head){
    Node* temp=head;
    vector<int> arr;

    while(temp!=NULL  && temp->next!=NULL ){
        arr.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp)   arr.push_back(temp->data);

    temp=head->next;
    while(temp && temp->next){
        arr.push_back(temp->data);
        temp=temp->next->next;
    }

    if(temp) arr.push_back(temp->data); 

    temp=head;
    int i=0;
    while(temp){
        temp->data=arr[i];
        i++;
        temp=temp->next;
    }

    return head;
}
Node* seggregateOddEven(Node* head){
    Node* odd=head;
    Node* evenHead=head->next;
    Node* even=head->next;

    if(head==NULL || head->next==NULL){
        return head;
    }

    while(even && even->next){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;

    }

    odd->next=evenHead;

    return head;
}
int main(){
    vector<int> arr={13,5,7,9,10,13};
    Node*head=Convert2LL(arr);
    print(head);
    Node* h1=seggregateOddEven(head);
    print(h1);

}