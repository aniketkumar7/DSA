#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    // constructor
    Node() {
        this->data = 0;
        this->next = NULL;
    }
    
    
    //constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    
    //destructor
    ~Node() {
        int value = this->data;
        
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};


void InsertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int d) {
    
    if (position == 1) {
        InsertAtHead(head, d);
        return;
    }
    
    
    Node* temp = head;
    int count = 1;
    
    while(count < position - 1) {
        temp = temp->next;
        count++;
    }
    
    if(temp->next == NULL) {
        InsertAtTail(tail, d);
        return;
    }
    
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}

void deleteAtHead(Node* &head) {
    Node* temp = head;
    head = head->next;
    temp ->next = NULL;
    delete temp;
}

// void deleteAtTail(Node* &tail) {
//     Node* temp = tail;
//     tail = tail->next;
//     delete temp;
// }

void deleteAtPosition(Node* &head, int position) {
    if(position == 1) {
        deleteAtHead(head);
        return;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        
        int count = 1;
        
        while(count < position) {
            prev = curr;
            curr = curr->next;
            count++;
        }
        
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
                
    }
    
}


void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    
    // create a new node
    Node* node1 = new Node(10);
    
    //insert at head
    Node* head = node1;
    Node* tail = node1;
    cout<<"Before Insertion"<<endl;
    print(head);
    
    
    InsertAtHead(head, 20);
    cout<<"After Insertion at head"<<endl;
    print(head);
    
    InsertAtTail(tail, 30);
    cout<<"After Insertion at tail"<<endl;
    print(head);
    
    InsertAtPosition(head, tail, 2, 60);
    cout<<"After Insertion at position 2"<<endl;
    print(head);
    
    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;
    
    // deleteAtHead(head);
    // cout<<"After Deletion at head"<<endl;
    // print(head);
    
    // deleteAtTail(tail);
    // cout<<"After Deletion at tail"<<endl;
    // print(head);
    
    deleteAtPosition(head, 4);
    cout<<"After Deletion at position 2"<<endl;
    print(head);
    
    cout << "Head: " << head -> data << endl;
    cout << "Tail: " << tail -> data << endl;
    
    return 0;
}