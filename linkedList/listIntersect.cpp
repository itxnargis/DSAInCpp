/*  Given the head of 2 singly linked lists headA and headB.
    * Return the node at which the two list intersect.
    * If the 2 linked list have no intersection at all, return null.
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

int getLength(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

Node* moveHeadByK(Node* head, int k){
    Node* ptr = head;
    while(k--){
        ptr = ptr->next;
    }
    return ptr;
}

Node* getIntersection(Node* head1, Node* head2){

    //Step1: Calculate length of both linked list
    int head1Length = getLength(head1);
    int head2Length = getLength(head2);

    //Step2: Find difference k between linked lisr and move longer linked list ptr by step
     Node* ptr1;
     Node* ptr2;
    if(head1Length > head2Length){
        int k  = head1Length - head2Length;
        ptr1 = moveHeadByK(head1, k);
        ptr2 = head2;
    }
    else{
        int k  = head2Length - head1Length;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2, k);
    }

    //Step3: Compare ptr1 and ptr2 nodes
    while(ptr1 != NULL){
        if(ptr1 == ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}

   int main(){
    linkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.display();
    linkedList ll2;
   ll2.insertAtTail(6);
   ll2.insertAtTail(7);
   ll2.head->next->next = ll1.head->next->next;
   ll2.display();
   Node* intersection = getIntersection(ll1.head, ll2.head);
   if(intersection){
    cout << intersection->val << endl;
   }
   else{
    cout << "-1" << endl;
   }
   return 0;
}
