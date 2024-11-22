#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int data;
    Node* next;
    Node* back;

    Node(int data, Node*next, Node* back){
        this->data=data;
        this->next=next;
        this->back=back;
    }

    Node(int data){
        this->data=data;
        next=nullptr;
        back=nullptr;
    }
};


Node* convertArr2Dll(vector <int>&arr){
    Node* head=new Node(arr[0]);
    Node*prev=head;

    for(int i=1;i<arr.size(); i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
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

Node* insertBeforeHead(Node*head, int val){
    Node* newNode=new Node(val,head,NULL);
    head->back=newNode;
    return newNode;
}

Node* insertBeforeTail(Node* head,int val){
    if(head->next==NULL){
        return insertBeforeHead(head,val);
    }

    Node*temp=head;

    while(temp->next){
        temp=temp->next;
    }

    Node* prev=temp->back;

    Node* newNode=new Node(val,temp,prev);
    
    prev->next=newNode;
    temp->back=newNode;

    return head;
}

Node* insertBeforeKthNode(Node* head,int k,int val){
    if(k==1){
        return insertBeforeHead(head,val);
    }

    int count=0;
    Node* temp=head;

    while(temp){
        count++;
        if(count==k) break;

        temp=temp->next;
    }

    Node* prev=temp->back;
    Node* newNode=new Node(val,temp,prev);

    prev->next=newNode;
    temp->back=newNode;

    return head;
}

Node* insertBeforeNode(Node* temp,int val){
    Node* prev=temp->back;
    Node* newNode=new Node(val,temp,prev);

    prev->next=newNode;
    temp->back=newNode;

    return temp;
}

int main(){
    vector<int> arr={13,5,7,9,10};
    Node* h=convertArr2Dll(arr);

    Node*h1= insertBeforeKthNode(h,3,15);

    print(h1);
}