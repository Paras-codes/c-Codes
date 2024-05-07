#include<iostream>
using namespace std;

class Node{
    
   
    public:
     int d;
    Node *next;
    Node(int d){
        this->d=d;
        this->next=NULL;
    }

    ~Node(){
        int d=this->d;

        if(this->next!=NULL){
            this->next=NULL;
            delete next;
        }
        cout<<"Memory freed for the value: "<<d;
    }
};

void insertAtHead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void print(Node* &head){
    if(head==NULL){
        cout<<"empty list";
    }
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->d<<" ";
        temp=temp->next;
    }

}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    insertAtHead(head,12);
    // print(head);
    insertAtTail(tail,14);
    print(head);
}