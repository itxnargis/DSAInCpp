//Find the middle of the given linked list
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

Node* findMiddleNode(Node* &head){
    Node* slowPtr = head;
    Node* fastPtr = head;
    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    return slowPtr;
}

   int main(){
    linkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(6);
    ll1.insertAtTail(7);
    ll1.insertAtTail(9);
    ll1.display();

    Node* middleNode = findMiddleNode(ll1.head);
    cout << middleNode->val << endl;
   return 0;
}
