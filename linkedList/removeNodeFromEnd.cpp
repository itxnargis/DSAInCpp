/*  Given the head of a linked list,
  * remove the kth node from the end of the list
  * and returns its head.
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

//Assuming k is always less than / equal length of linked list
void removeKthNodeFromEnd(Node* &head, int k){
    Node* ptr1 = head;
    Node* ptr2 = head;

//move ptr2 by k steps ahead
    int count = k;
    while(count--){
        ptr2 = ptr2->next;
    }

//k is equal to length of linked list
// we have to delete the head
    if(ptr2 == NULL){
        Node* temp = head;
        head = head->next;
        free(temp);
        return;
    }

//now ptr2 is k steps ahead of ptr1
//when ptr2 is null(end of list), ptr will be at node to be dleted
    while(ptr2->next != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

//now ptr2 is pointing to the node before kth node from end
//node to be dleted is ptr1->next

   Node* temp = ptr1->next;
   ptr1->next = ptr1->next->next;
   free(temp);
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

    removeKthNodeFromEnd(ll1.head, 3);
    ll1.display();


   return 0;
}
