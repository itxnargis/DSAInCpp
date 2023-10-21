// /*  * Given an array of integer heights representing the histogram's bar height where
//     * The width of each bar is 1,
//     * return the area of the largest rectangle in the histogram.
// */
// #include<iostream>
// #include<stack>
// #include<vector>
// #include<climits>
// using namespace std;

// int largestAreaRectangle(vector<int> &array){
//     stack<int> input;
//     int answer = INT_MIN;
//     input.push(0);
//     for(int i = 1; i < array.size(); i++){
//         while(!input.empty() && array[i] > array[input.top()]){
//            int element = array[input.top()];
//            input.pop();
//            int nextGreaterIndex = i;
//            int previousGreaterIndex = (input.empty()) ? -1 : input.top();
//            answer = max(answer, element * (nextGreaterIndex - previousGreaterIndex - 1));
//         }
//         input.push(i);
//     }
//     while(!input.empty()){
//         int element = array[input.top()];
//         int nextGreaterIndex = array.size();
//         int previousGreaterIndex = (input.empty()) ? -1 : input.top();
//         answer = max(answer, element * (nextGreaterIndex - previousGreaterIndex - 1));
//         input.pop();
//     }
//     return answer;
// }

//    int main(){
//     int arraySize;
//     cout << "Enter size of array: " << endl;
//     cin >> arraySize;

//     vector<int> v;
//     while(arraySize--){
//         int element;
//         cin >> element;
//         v.push_back(element);
//     }

//     cout << "Resultant array elements are: " << endl;
//     int  ans = largestAreaRectangle(v);
//     cout << ans << endl;
//    return 0;
// }

#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;

int largestAreaRectangle(vector<int> &array){
    stack<int> input;
    int answer = INT_MIN;
    input.push(0);
    for(int i = 1; i < array.size(); i++){
        while(!input.empty() && array[i] < array[input.top()]){
            int element = array[input.top()];
            input.pop();
            int previousGreaterIndex = (input.empty()) ? -1 : input.top();
            answer = max(answer, static_cast<int>(element * (i - previousGreaterIndex - 1))); // Cast to int
        }
        input.push(i);
    }
    while(!input.empty()){
        int element = array[input.top()];
        input.pop();
        int previousGreaterIndex = (input.empty()) ? -1 : input.top();
        answer = max(answer, static_cast<int>(element * (array.size() - previousGreaterIndex - 1))); // Cast to int
    }
    return answer;
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
    int ans = largestAreaRectangle(v);
    cout << ans << endl;

    return 0;
}
