/*Given an array of integers 'a' , move all the even integers at the beginning of the array followed bt all the odd integers.The relative order of odd or even integers does not matter.Return any array that satisfies the condition*/

#include<iostream>
#include<vector>
using namespace std;

void sortEvenAndOdd(vector <int> &arr){
    int leftPtr = 0;
    int rightPtr = arr.size() - 1;

    for(int i = 0; i < arr.size(); i++){
        while(leftPtr < rightPtr){
            if(arr[leftPtr] % 2 == 1 && arr[rightPtr] % 2 == 0){
                swap(arr[leftPtr], arr[rightPtr]);
                leftPtr++;
                rightPtr--;
            }

            if(arr[leftPtr] % 2 == 0){
                leftPtr++;
            }
            if(arr[rightPtr] % 2 == 1){
                rightPtr--;
            }
        }
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

    sortEvenAndOdd(arr);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

   return 0;
}