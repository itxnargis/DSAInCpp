/* Print the max value of the arr [3, 10, 3, 2, 5] */
#include<iostream>
using namespace std;

int maxElement(int *arr, int index, int arraySize){
    if(index == arraySize - 1){
        return arr[index];
    }
    return max(arr[index], maxElement(arr, index + 1, arraySize));
}

   int main(){
    int arr[] = {3,  10, 3, 2, 5};
    int arraySize = 5;

    cout << "Maximum value in array is: " << endl;
    cout << maxElement(arr, 0, arraySize);

   return 0;
}