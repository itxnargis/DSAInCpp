/*Find the second largest element in the given array*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int secondLargestElement(int arr[], int size){
        int max = INT_MIN;
        int second_max = INT_MIN;

        for(int i = 0; i < 5; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }

        for(int i = 0; i < 5; i++){
            if(arr[i] > second_max && arr[i] != max){
                second_max = arr[i];
            }
        }
        return second_max;
        }

   int main(){
    int arr[] = {1, 4, 5, 9, 9};
    int size = 5;

    cout << "Second largest number is: " << secondLargestElement(arr, size);


   return 0;
}