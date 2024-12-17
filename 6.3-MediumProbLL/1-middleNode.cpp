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

Node*middleNodeBrute(Node* head){
    Node* temp=head;
    int len=0;

    while(temp){
        len++;
        temp=temp->next;
    }
    int mid=(len/2)+1;
    

    temp=head;

    while(temp){

        mid--;
        if(mid==0){
            break;
        }
        temp=temp->next;
    }

    return temp;

}

Node*middleNodeBetter(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;

}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    Node*head=convert2LL(arr);
    print(head);

    Node* h1=middleNodeBetter(head);
    cout<<h1->data;
    // print(h1);
    

}