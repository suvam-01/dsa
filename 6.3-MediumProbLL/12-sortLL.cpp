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

Node* sortLlBrute(Node* head){
    Node* temp=head;

    int count0=0;
    int count1=0;
    int count2=0;

    while(temp){
        if(temp->data==0){
            count0++;
        }

        else if(temp->data==1){
            count1++;
        }
        else{
            count2++;
        }
        temp=temp->next;
    }

    temp=head;

    while(temp){
        if(count0){
            temp->data=0;
            count0--;
        }

        else if(count1){
            temp->data=1;
            count1--;
        }
        else if(count2){
            temp->data=2;
            count2--;
        }
        temp=temp->next;

    }

    return head;

}

Node* sortLl(Node* head){
    Node*zeroHead=new Node(-1);
    Node*oneHead=new Node(-1);
    Node*twoHead=new Node(-1);

    Node*zero=zeroHead;
    Node*one=oneHead;
    Node* two=twoHead;

    Node* temp=head;

    while(temp){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }
        else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }
        else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }

    zero->next=oneHead->next?oneHead->next:twoHead->next;
    one->next=twoHead->next;
    two->next=NULL;

    return zeroHead->next;

}

int main(){
    vector<int> arr={1,0,1,2,2,0,0,1,1};
    Node*head=convert2LL(arr);
    print(head);
    Node*h=sortLl(head);
    print(h);

}