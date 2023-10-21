/*  Given the head of a linked list.
    * Delete every alternate element from the list
    * Strarting from the second element.
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

void deleteAlternateNode(Node* &head){
    Node* currentNode = head;
    while(currentNode != NULL && currentNode -> next != NULL){
        Node* temp = currentNode->next; //this is the node to be deleted
        currentNode->next = currentNode->next->next;
        free(temp);
        currentNode= currentNode->next;
    }
}

   int main(){
    linkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    deleteAlternateNode(ll.head);
    ll.display();

   return 0;
}