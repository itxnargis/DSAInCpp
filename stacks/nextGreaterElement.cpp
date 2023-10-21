#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextGreaterElement(vector<int> &array){
    vector<int> output(array.size(), -1);
    stack<int> input;

    input.push(0);
    for(int i = 1; i < array.size(); i++){
        while(!input.empty() && array[i] > array[input.top()]){
            output[input.top()] = array[i];
            input.pop();
        }
        input.push(i);
    }
    return output;
}

   int main(){
    int arraySize;
    cout << "Enter size of array: " << endl;
    cin >> arraySize;

    vector<int> v;
    while(arraySize--){
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << "Resultant array elements are: " << endl;
    vector<int> res = nextGreaterElement(v);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
   return 0;
}