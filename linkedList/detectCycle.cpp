/*  * Given head, the head of a linked list,
    * Detremine if the linked lis has a cycle in it*/

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

bool detectCycle(Node* &head){
    Node* slowPtr = head;
    Node* fastPtr = head;
    if(!head){
        return false;
    }
    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if(slowPtr == fastPtr){
            cout << slowPtr->val << endl;
            return true;
        }
    }
    return false;
}

void removeCycle(Node* &head){
    Node* slowPtr = head;
    Node* fastPtr = head;

    do{
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    while(slowPtr != fastPtr);
    fastPtr = head;
    while(slowPtr->next != fastPtr->next){
        slowPtr =slowPtr->next;
        fastPtr = fastPtr->next;
    }
    slowPtr->next = NULL;
}

   int main(){
    linkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.insertAtTail(6);
    ll1.insertAtTail(7);
    ll1.insertAtTail(8);
    ll1.display();
   ll1.head->next->next->next->next->next->next->next->next = ll1.head->next->next;
    cout << detectCycle(ll1.head) << endl;
    removeCycle(ll1.head);
    cout << "After removing cycle: " << endl;
    cout << detectCycle(ll1.head) << endl;
    ll1.display();
   return 0;
}
