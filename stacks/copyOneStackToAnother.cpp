#include<iostream>
#include<stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(!input.empty()){
        int current = input.top();
        input.pop();
        temp.push(current);
    }

     stack<int> result;
    while(!temp.empty()){
        int current = temp.top();
        temp.pop();
        result.push(current);
    }
    return result;
}

   int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res = copyStack(st);

    while(!res.empty()){
        int current = res.top();
        res.pop();
        cout << current << endl;
    }
   return 0;
}