#include<iostream>
using namespace std;

int inputArray(){
    int size;
    int maxSize = 100;
    int arr[maxSize];
    cout << "Enter size of array: " << endl;
    cin >> size;
    cout << "Enter " << size <<" elements: " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

int arrSum(){
     int input = inputArray();
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    cout << "Sum of elements of array is: ";
    return sum;
}

   int main(){
    cout << arrSum();
   return 0;
}