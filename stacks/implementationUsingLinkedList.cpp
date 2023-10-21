#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currentSize;

    public:
    Stack(int c){
        this->capacity = c;
        this->currentSize = 0;
        head = NULL;
    }
    bool isEmpty(){
        return this->head == NULL;
    }
    bool isFull(){
        return this->currentSize == this->capacity;
    }

    void push(int data){
        if(this->currentSize == this->capacity){
            cout << "Overflow\n";
            return;
        }
        Node* newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->currentSize++;
    }

    int pop(){
        if(this->head == NULL){
            cout << "Underflow\n";
            return INT_MIN;
        }
        Node* newNode = this->head->next;
        this->head->next = NULL;
        Node* toBeRemoved = this->head;
        int result = toBeRemoved->data;
        delete toBeRemoved;
        this->head = newNode;
        return result;
    }

    int getTop(){
        if(this->head == NULL){
            cout << "Underflow\n";
            return INT_MIN;
        }
        return this->head->data;
    }

    int size(){
        return this->currentSize;
    }
};

   int main(){
    Stack s1(8);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << s1.getTop() << endl;
    s1.push(4);
    s1.push(5);
    cout << s1.getTop() << endl;
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    cout << s1.getTop() << endl;

   return 0;
}