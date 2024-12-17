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

Node* add2Numbers(Node* head1,Node* head2){
    Node* dummyHead=new Node(-1);
    Node* temp1=head1;
    Node* temp2=head2;
    Node* curr=dummyHead;

    int carry=0;

    while(temp1!=NULL || temp2!=NULL){
        int sum=carry;

        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;

        Node* newNode=new Node(sum%10);
        carry=sum/10;

        curr->next=newNode;
        curr=curr->next;

        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;

    }

    if(carry){
        Node* newNode=new Node(carry);
        curr->next=newNode;
    }

    return dummyHead->next;
}

int main(){
    vector<int> arr1={3,5};
    vector<int> arr2={4,5,9,9};

    Node*h1=Convert2LL(arr1);
    Node*h2=Convert2LL(arr2);

    print(h1);
    print(h2);

    Node* o=add2Numbers(h1,h2);
    print(o);

}