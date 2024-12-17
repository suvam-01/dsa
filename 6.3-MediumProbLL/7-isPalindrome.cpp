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

bool isPalindrome(Node* head){

    Node* slow=head;
    Node* fast=head;

    while(fast->next !=NULL && fast->next->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    Node*newNode=reverseLl(slow->next);

    Node* first=head;
    Node* second=newNode;

    while(second!=NULL){
        if(first->data!=second->data)
        {
            reverseLl(newNode);
            return false;
        }
        first=first->next;
        second=second->next;
    }

    reverseLl(newNode);
    return true;

}

int main(){
    vector<int> arr={1,2,3,2,1};
    Node*head=convert2LL(arr);
    print(head);

    if(isPalindrome(head)){
        cout<<"is  palindrome";
    }
    else{
        cout<<"is not  palindrome";

    }
    

}