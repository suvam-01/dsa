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

Node* deleteHead(Node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    Node* temp=head;
    head=head->next;

    head->back=nullptr;
    temp->next=nullptr;

    delete temp;

    return head;

}

Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    Node* temp=head;

    while (temp->next)
    {
        temp=temp->next;
    }

    Node* prev=temp->back;
    prev->next=nullptr;
    temp->back=nullptr;

    delete temp;
    
    return head;
    
}

Node* deleteKthNode(Node*head,int k){
    int count=0;
    Node* temp=head;

    while(temp){
        count++;
        if(count==k) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;

    if(front==NULL &&  prev==NULL){
        delete temp;
        return NULL;
    }

    else if(prev==NULL){
       return deleteHead(head);
    }
    else if(front==NULL){
       return deleteTail(head);
    }
    
    prev->next=front;
    front->back=prev;

    temp->next=NULL;
    temp->back=NULL;

    delete temp;

    return head;

}

void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;

    if(front==NULL){
        prev->next=NULL;
        temp->back=NULL;
        delete temp;
        return;
    }
    prev->next=front;
    front->back=prev;

    temp->next=temp->back=nullptr;

    delete temp;
    return;
}

int main(){
    vector<int> arr={13,5,7,9,10};
    Node* h=convertArr2Dll(arr);

    // Node* h1=deleteKthNode(h,5);
    deleteNode(h->next->next);
    print(h);


}