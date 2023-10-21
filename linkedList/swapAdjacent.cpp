/*  * Given a linked list, swap every two adjacent nodes and return its head.
    * You may not odify the values in the list's nodes
    8 Only nodes themselves may be changed
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

Node* swapAdjacent(Node* &head){
    // base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    // recursive case
    Node* secondNode = head->next;
    head->next = swapAdjacent(secondNode->next);
    secondNode->next = head; // reversing the link b/w first and second node
    return secondNode;
}
   int main(){
    linkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.display();
    ll1.head = swapAdjacent(ll1.head);
    ll1.display();
   return 0;
}