/*  Given 2 linked lists, Tell if they are equal or not.
  * Two linked are equal if they have the same data and the arrangement of data is also same.
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

bool isLinkedListEqual(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->val != ptr2->val){
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return (ptr1 == NULL && ptr2 == NULL);

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
   ll2.insertAtTail(1);
   ll2.insertAtTail(2);
   ll2.insertAtTail(3);
   ll2.insertAtTail(4);
   ll2.insertAtTail(5);
   ll2.display();
   cout << isLinkedListEqual(ll1.head, ll2.head);


   return 0;
}
