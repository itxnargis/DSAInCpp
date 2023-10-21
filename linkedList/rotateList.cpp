// Given the head of a linked list, rotate the list to the right by k places

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

Node* rotateByK(Node* &head, int k){
    //Step21: Find length of ll
    int lengthOfLinkedList = 0;
    //Step2: Find tail node
    Node* tail = head;
    while(tail->next){
        lengthOfLinkedList++;
        tail = tail->next;
    }
    lengthOfLinkedList++; // for includeing last node

    k = k % lengthOfLinkedList;
    if(k == 0){
        return head;
    }

    tail->next = head;
    //Step3: traverse n-k nodes
    Node* temp = head;
    for(int i = 1; i < lengthOfLinkedList-k; i++){
        temp = temp->next;
    }

    // Temp is now pointing to (n - k)th node
    Node* newHead = temp->next;
    temp->next = NULL;
    return newHead;
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
    ll1.head = rotateByK(ll1.head, 3);
    ll1.display();
   return 0;
}
