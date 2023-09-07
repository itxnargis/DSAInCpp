/*Check if we can partition the array into two subarrays with equal sum.More formally, check that the prefix sum of a part of the arrayis equal to the suffix sum of rest of the array*/

#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector <int> &arr){
    int totalSum = 0;
    for(int i = 0; i < arr.size(); i++){
        totalSum += arr[i];
    }

    int prefixSum = 0;
   for(int i = 0; i < arr.size(); i++){
        prefixSum += arr[i];
        int suffixSum = totalSum - prefixSum;

        if(suffixSum == prefixSum){
            return true;
        }
    }
    return false;
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
    cout << checkPrefixSuffixSum(arr) << endl;
   return 0;
}