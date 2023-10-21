#include<iostream>
#include<stack>
using namespace std;

    bool isBalancedBracket(string str){
        stack<char> input;
        for(int i = 0; i < str.size(); i++){
            char ch = str[i];
            if(ch == '[' || ch == '{' || ch == '('){
                input.push(ch);
            }
            else{
                if(ch == ')' && !input.empty() && input.top() == '('){
                    input.pop();
                }
                    else if(ch == '}' && !input.empty() && input.top() == '{'){
                    input.pop();
                }
                    else if(ch == ']' && !input.empty() && input.top() == '['){
                    input.pop();
                }
                else{
                    return false;
                }
            }
        }
        return input.empty();
    }
   int main(){
    string str = "[(()){}]";
    cout << isBalancedBracket(str) << endl;

   return 0;
}