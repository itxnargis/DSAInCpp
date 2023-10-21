#include<iostream>
#include<stack>
using namespace std;

stack<int> reverseStack(stack<int> &input){
    stack<int> temp1, temp2;

    while(!input.empty()){
        int current = input.top();
        input.pop();
        temp1.push(current);
    }
     while(!temp1.empty()){
        int current = temp1.top();
        temp1.pop();
        temp2.push(current);
    }
     while(!temp2.empty()){
        int current = temp2.top();
        temp2.pop();
        input.push(current);
    }
}

   int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);
    cout << "Reversed Stack is: " << endl;
    while(!st.empty()){
        int current = st.top();
        st.pop();
        cout << current << endl;
    }

   return 0;
}