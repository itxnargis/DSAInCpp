/*Given an  integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortedSquareArray(vector <int> &arr){
    int leftPtr = 0;
    int rightPtr = arr.size() - 1;
    vector <int> answer;

    // for(int i = 0; i < arr.size(); i++){
        while(leftPtr <= rightPtr){
            if(abs(arr[leftPtr]) < abs(arr[rightPtr])){
                answer.push_back(arr[rightPtr] * arr[rightPtr]);
                rightPtr--;
            }
            else{
                 answer.push_back(arr[leftPtr] * arr[leftPtr]);
                leftPtr++;
            }
        }
        reverse(answer.begin(), answer.end());
         cout << "Sorted array: ";
    for(int i = 0; i < arr.size(); i++){
        cout << answer[i] << " ";
    }
    cout << endl;
}



   int main(){
    int size;
    cout << "Enter size of the element: " << endl;
    cin >> size;
    cout <<"Enter " << size << " elements: " << endl;

    vector <int> arr(size);
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sortedSquareArray(arr);
   return 0;
}