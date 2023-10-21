/*  Given the head of a sorted linked list.
    * Reverse the nodes of the list k at a time.
    * Return the modified list
*/
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

class linkedList{
    public:
    Node* head;
    linkedList(){
        head = NULL;
    }

    void insertAtTail(int value){
        Node* newNode = new Node(value);
        if(head == NULL){//linkedList is empty
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> val << "->" ;
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

Node* reverseKNodes(Node* &head, int k){
    Node* previousPtr = NULL;
    Node* currentNode = head;
    int counter = 0; // for counting first k nnodes

    while(currentNode != NULL && counter < k){
        Node* nextPtr = currentNode->next;
        currentNode->next = previousPtr;
        previousPtr = currentNode;
        currentNode = nextPtr;
        counter++;
    }

    //currentNode will give us (k-1)th node
    if(currentNode != NULL){
        Node* newHead = reverseKNodes(currentNode, k); // recursive call
        head->next = newHead;
    }
    return previousPtr;//prevoiusPtr will give the newHead of connected linkeddlist
}

   int main(){
    linkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    ll.head = reverseKNodes(ll.head, 3);
    ll.display();
   return 0;
}