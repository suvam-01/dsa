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

Node* intersectionPointBrute(Node* head1,Node* head2){
    map<Node*,int> mpp;

    Node* temp=head1;

    while(temp){
        mpp[temp]=1;
        temp=temp->next;
    }

    temp=head2;

    while(temp){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}

Node* intersectionPointBetter(Node* head1,Node* head2){
    
    while(head2){
        Node* temp=head1;
        while(temp){
            if(temp==head2) {
                return temp;
            }
            temp=temp->next;
        }
        head2=head2->next;
    }
    return NULL;
}

Node* intersectionPointOptimal(Node* head1,Node* head2){
    Node* t1=head1;
    Node* t2=head2;

    if(head1==NULL || head2==NULL){
        return NULL;
    }

    while(t1!=t2){

        t1=t1->next;
        t2=t2->next;

        if(t1==t2){
            return t1;
        }

        if(t1==NULL){
            t1=head2;
        }

        if(t2==NULL){
            t2=head1;
        }


    }
    return t1;
}

int main(){
    vector<int> arr={9,9,9};
    Node*head=convert2LL(arr);
    print(head);
    
}