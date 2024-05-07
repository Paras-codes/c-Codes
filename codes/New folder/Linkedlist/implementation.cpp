#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};
void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void deleteList(Node* &head) {
    Node* current = head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        delete current;
        current = next;
    }

    head = NULL;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;

}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main() {
    
    //created a new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;
    //print(head);

    insertAtTail(tail, 12);

    //print(head);
    
    insertAtTail(tail, 15);
    print(head);

    // insertAtHead(head,9);
    // print(head);    

    // //cout << "head " << head -> data << endl;
    // //cout << "tail " << tail -> data << endl;

    // //deleteNode(4, head);
    

    // tail -> next = head ->next;

    // cout << "head " << head -> data << endl;
    // cout << "tail " << tail -> data << endl;
    // //print(head);

    // if(floydDetectLoop(head) != NULL) {
    //     cout << "Cycle is present " << endl;
    // }
    // else
    // {
    //     cout << "no cycle" << endl;
    // }

    // Node* loop = getStartingNode(head);

    // cout << "loop starts at " << loop -> data  << endl;

    // removeLoop(head);
    // print(head);

    /*
    print(head);

    if(isCircularList(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
    */
    deleteList(head);

    return 0;
}