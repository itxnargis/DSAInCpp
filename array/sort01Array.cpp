/*Sort an array consisting of only 0s and 1s.*/
#include<iostream>
#include<vector>
using namespace std;

void sortZeroesOrOnes(vector <int> &arr){
    int leftPtr = 0;
    int rightPtr = arr.size() - 1;

    for(int i = 0; i < arr.size(); i++){
        while(leftPtr < rightPtr){
            if(arr[leftPtr] == 1 && arr[rightPtr] == 0){
                arr[leftPtr++] = 0;
                arr[rightPtr--] = 1;
            }
            //If elements are their right position
            if(arr[leftPtr] == 0){
                leftPtr++;
            }
            if(arr[rightPtr] == 1){
                rightPtr--;
            }
        }
    }

    // int zeroesCount = 0;
    // for(int ele: arr){
    //    if(ele == 0){
    //         zeroesCount++;
    //     }
    // }

    // for(int i = 0; i < arr.size(); i++){
    //     if(i < zeroesCount){
    //         arr[i] = 0;
    //     }
    //     else {
    //         arr[i] = 1;
    //     }
    // }

}

   int main(){
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;
    cout << "Enter " << size << " Elements: " << endl ;

    vector <int> arr(size);
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sortZeroesOrOnes(arr);

     cout << "Sorted array : ";
    for(int i = 0; i < size; i++){
        cout << arr[i]  << " ";
    }
    cout << endl;




   return 0;
}