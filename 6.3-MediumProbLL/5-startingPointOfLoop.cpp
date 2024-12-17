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

Node* startingPointBrute(Node*head){
    unordered_map<Node*,int>mpp;
    Node* temp=head;

    while(temp){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        mpp[temp]=1;
        temp=temp->next;
    }
    return NULL;

}

Node* startingPointOptimal(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;

       

        if(slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }

    }
    return NULL;

}

void print(Node*head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    Node*head=convert2LL(arr);
    print(head);

    Node* h1=startingPointOptimal(head);
    print(h1);
    

}
