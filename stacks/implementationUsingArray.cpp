#include<iostream>
#include<climits>
using namespace std;

    class Stack {
        int capacity;
        int* arr;
        int top;
        public:
        Stack(int c){
            this->capacity = c;
            arr = new int[c];
            this->top = -1;
        }

        void push(int data){
            if(this->top == this->capacity - 1){
                cout << "Overflow\n";
                return;
            }
            this->top++;
            this->arr[this->top] = data;

        }

        int pop(){
            if(this->top == -1){
                cout << "Underflow\n" ;
                return INT_MIN;
            }
            this->top--;
        }

        int getTop(){
            if(this->top == -1){
                cout << "Underflow\n";
                return INT_MIN;
            }
            return this->arr[this->top];
        }

        bool isEmpty(){
            return this->top == -1;
        }

        int size(){
            return this->top + 1;
        }

        bool  isFull(){
            return this->top == this->capacity - 1;
        }
    };

   int main(){
    Stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << s1.getTop() << endl;
    s1.push(4);
    s1.push(5);
    cout << s1.getTop() << endl;
    s1.push(6);
   return 0;
}