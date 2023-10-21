/*  * Given the head of a singly linked list,
    * Group all the nodes with odd indices together followed by the nodes with even indices
        * return the reordered list*/
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

Node* oddEven(Node* &head){
    if(!head){
        return head;
    }

    Node* evenHead = head->next;
    Node* oddPtr = head;
    Node* evenPtr = evenHead;
    while(evenPtr && evenPtr->next){
        oddPtr->next = oddPtr->next->next;
        evenPtr->next = evenPtr->next->next; 
        oddPtr = oddPtr->next;
        evenPtr = evenPtr->next;
    }
    oddPtr->next = evenHead;
    return head;
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
    ll1.head = oddEven(ll1.head);
    ll1.display();
   return 0;
}