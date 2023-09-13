#include<iostream>
using namespace std;

int sumArray(int *arr, int index, int arraySize){
    if(index == arraySize - 1){
        return arr[index];
    }
    return arr[index] + sumArray(arr, index + 1, arraySize);
}

   int main(){

    int arr[20];
    int arraySize, index;
    cout << "Enter size of array: " << endl;
    cin >> arraySize;
    cout << "Enter elements: " << endl;

    for(int i = 0; i < arraySize; i++){
        cin >> arr[i];
    }

    cout << "Enter index of the array where you want to print the elements: " << endl;
    cin >> index;
    cout << "Sum of value of array is: " << sumArray(arr, index, arraySize) << endl;
    
   return 0;
}