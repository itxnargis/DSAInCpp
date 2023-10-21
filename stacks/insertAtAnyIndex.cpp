#include<iostream>
#include<stack>
using namespace std;

stack<int> insertAtAnyIndex(stack<int> &input, int index, int value){
   stack<int> temp;
   int count = 0;
   while(count < input.size() - index){
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
      insertAtAnyIndex(st, 1, 100);
      while(!st.empty()){
         int current = st.top();
         st.pop();
         cout << current << endl;
      }
   return 0;
}