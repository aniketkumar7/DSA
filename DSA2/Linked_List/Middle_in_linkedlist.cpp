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

/**
 * The function inserts a new node with data 'd' at the end of a linked list.
 * 
 * @param tail The tail parameter is a reference to a pointer of type Node. It represents the last node
 * in a linked list.
 * @param d The value to be inserted at the tail of the linked list.
 */
void InsertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
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
    
    Node* head = new Node();
    Node* tail = head;
    
    cout << head << endl;
    cout << &head << endl;
    cout << tail << endl;
    
    cout << "Enter the nodes: ";
    
    for (int i = 0; i < n; i++) {
        cin >> data;
        InsertAtTail(tail, data);
    }
    
    cout << "Middle Node is: ";
    cout << middleNode(head)->data << endl;
    return 0;
}