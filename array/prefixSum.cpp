/*Given an integer array 'a' , return the prefix sum / running sum is the same array without creating a new array*/

#include<iostream>
#include<vector>
using namespace std;

void runningSum(vector <int> &arr){
    for(int i = 1; i < arr.size(); i++){
        arr[i] += arr[i - 1];
    }

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
    runningSum(arr);
    cout << "Prefix sum: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
   return 0;
}