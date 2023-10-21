// Check if the linked list is palindrome or not

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

bool isPalindrome(Node* head){
    //Step1: Find middle ELement
    Node* slowPtr = head;
    Node* fastPtr = head;

    while(fastPtr != NULL && fastPtr->next != NULL){
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    // now slow is pointing to misddle node
    //Step2: Break the linked list in middle

    Node* currentNode = slowPtr->next;
    Node* previous = slowPtr;
    slowPtr->next = NULL;

    //Step3: Reverse the second half of linked list
    while(currentNode){
        Node* nextNode = currentNode->next;
        currentNode->next = previous;
        previous = currentNode;
        currentNode = nextNode;
    }

    //Step4: Chek if the 2 linked list are equal
    Node* head1 = head;
    Node* head2 = previous;

    while(head2){
        if(head1->val != head2->val){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}
   int main(){
    linkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(3);
    ll1.insertAtTail(2);
    ll1.insertAtTail(1);
    ll1.display();
    cout << "Result is: " << isPalindrome(ll1.head) << endl;
   return 0;
}
