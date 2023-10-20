#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector <int> &input, int target){
    int low = 0;
    int high = input.size() - 1;

    while(low <= high){
       int mid = low + (high - low)/ 2;

        if(input[mid] == target){
            return mid;
        }
        else if(input[mid] < target){
            low = mid + 1;
        }
        else {
             high = mid - 1;
        }
    }
    return -1;
}

   int main(){
    int sizeOfArray;
    cout << "Enter size of array: " << endl;
    cin >> sizeOfArray;
     cout << "Enter " << sizeOfArray << " elements: " << endl;

    vector <int> input;
    for(int i = 0; i < sizeOfArray; i++){
        int elements;
        cin >> elements;
        input.push_back(elements);
    }

    int target;
    cout << "Enter target value to find: "<< endl;
    cin >> target;
    cout << "Your target index is: " << binarySearch(input, target) << endl;

   return 0;
}