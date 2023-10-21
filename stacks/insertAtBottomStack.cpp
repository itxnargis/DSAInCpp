#include<iostream>
#include<stack>
using namespace std;

stack<int> insertAtBottom(stack<int> &input, int value){
   stack<int> temp;
   while(!input.empty()){
      int current = input.top();
      input.pop();
      temp.push(current);
   }
   input.push(value);

   while(!temp.empty()){
      int current = temp.top();
      temp.pop();
      input.push(current);
   }
}

   int main(){
      stack<int> st;
      st.push(1);
      st.push(2);
      st.push(3);
      st.push(4);
      insertAtBottom(st, 100);
      while(!st.empty()){
         int current = st.top();
         st.pop();
         cout << current << endl;
      }
   return 0;
}