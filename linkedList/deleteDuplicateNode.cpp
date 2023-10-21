/*  Given the head of a sorted linked list.
    * Delete all duplicates such that each element appers only once.
    * Return the linked list sorted as well.
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

void deleteDuplicateNode (Node* &head){
    Node* currentNode = head;
    while(currentNode != NULL){
        while(currentNode->next != NULL && currentNode->val == currentNode->next->val){
            // delete current element
            Node* temp = currentNode->next; // node to be deleted
            currentNode->next = currentNode->next->next;
            free(temp);
        }

        //This loop ends when current node and next node values are diffrent
        // or linkedList ends
        currentNode = currentNode->next;
    }
}



   int main(){
    linkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(5);
    ll.display();
    deleteDuplicateNode(ll.head);
    ll.display();


   return 0;
}