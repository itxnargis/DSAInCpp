/*  Given thes head of a linked list.
    * reverse the list and then
    * Print the  reverse list
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

Node* ReverseList(Node* &head){
    Node* previousPtr = NULL;
    Node* currentNode = head;

    //current->next = prevoiusPtr
    // move all 3 pointers by one step ahead

    while(currentNode != NULL){
        Node* nextPtr = currentNode->next;
        currentNode->next = previousPtr;
        previousPtr = currentNode;
        currentNode = nextPtr;
    }

    //when this loop ends, prevoius pointer pointing to my last node which is my new head
    Node* newHead = previousPtr;
    return newHead;
}

Node* reverseRecursively(Node* &head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }

    //recursive case
    Node* newHead = reverseRecursively(head->next);
    head->next->next = head;
    head->next = NULL; // head is now pointing to last node in reversed list
    return newHead;
}

   int main(){
    linkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
   ll.head = reverseRecursively(ll.head);
   ll.display();


   return 0;
}