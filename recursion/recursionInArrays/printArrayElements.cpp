/* Given an array, print all the elements of the array recursively*/

#include<iostream>
using namespace std;

int printArrayElements(int *arr, int index, int arraySize){
    if(index == arraySize){
        return 0;
    }
    cout << arr[index]  << " ";
    printArrayElements(arr, index + 1, arraySize);
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
    cout << "Array elements are: " << endl;

    printArrayElements(arr, index, arraySize);

   return 0;
}