#include <iostream>
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

void InsertAtTail(Node* &tail, int d) {
    Node* newNode  = new Node(d);
    tail->next = newNode;
    tail = newNode;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << NULL;
}

Node* middleNode(Node* &head)
{
    Node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next, 
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    int n, data;
    cout << "Enter the number of nodes: ";
    cin >> n;
    
    Node* head = NULL;
    Node* tail = NULL;
    
    cout << "Enter the nodes: ";
    
    for (int i = 0; i < n; i++) {
        cin >> data;
        if(head == NULL) {
            head = tail = new Node(data);
        }
        else {
            InsertAtTail(tail, data);
        }
    }
    
    cout << "Linked List: ";
    print(head);
    
    cout << "Middle Node is: ";
    cout << middleNode(head)-> data << endl;
    return 0;
}