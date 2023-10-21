#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode -> next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);

    Node* temp = head;
    while(temp -> next != NULL){
        temp =  temp -> next;
    }

    // temp has reached last node
    temp -> next = newNode;
}

void insertAtPosition(Node* &head, int val, int position){
    if(position == 0){
        insertAtHead(head, val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;
    int currentPosition = 0;
    while(currentPosition != position -1){
        temp = temp -> next;
        currentPosition++;
    }
    // temp is pointing to node at pos -1
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void updateAtPosition(Node* &head, int val, int position){
    Node* temp = head;
    int currentPosition = 0;
    while(currentPosition != position){
        temp = temp -> next;
        currentPosition++;
    }

    //temp will be pointing to position node
    temp -> val = val;
}

void deleteAtHead(Node* &head){
    Node* temp = head; // node to be deleted
    head = head -> next;
    free(temp);
}

void deleteAtTail(Node* &head){
    Node* secondLast = head;
    while(secondLast->next->next != NULL){
        secondLast = secondLast -> next;
    }

    //Now second last points to second last node
    Node* temp = secondLast -> next; // node to be deleted

    secondLast -> next  = NULL;
    free(temp);
}

void deleteAtPosition(Node* &head, int position){
    if(position == 0){
        deleteAtHead(head);
        return;
    }
    int currentPosition = 0;
    Node* previous = head;
    while(currentPosition != position -1){
        previous = previous -> next;
        currentPosition++;
    }

    //previous is pointing to node at position -1
    Node* temp = previous -> next;//node to be deleted
    previous -> next = previous->next->next;
    free(temp);
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> val << "->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

   int main(){
    Node* head = NULL;
    insertAtHead(head, 2);
    display(head);
     insertAtHead(head, 1);
    display(head);
    insertAtTail(head, 3);
    display(head);
    insertAtPosition(head, 4, 1);
    display(head);
    updateAtPosition(head, 5, 2);
    // display(head);
    // deleteAtHead(head);
    // display(head);
    // deleteAtTail(head);
    // display(head);
    deleteAtPosition(head, 2);
    display(head);

   return 0;
}