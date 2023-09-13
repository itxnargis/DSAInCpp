/* Given an array of integers, print sums of all the subsets in it.
    * Output sums can be printed in any order
    * Input1: arr[] = {2, 3}
    * Output: 0 2 3 5
*/

#include<iostream>
#include<vector>
using namespace std;

void findSubsetSum(int *arr, int number, int index, int sum, vector <int> &result){
    // base case
    if(index == number){
        result.push_back(sum);
        return;
    }
    findSubsetSum(arr, number, index  + 1, sum + arr[index], result);
    findSubsetSum(arr, number, index  + 1, sum, result);
}

   int main(){
    int arr[20], number;
    int sum = 0;
    cout << "Enter number: " << endl;
    cin >> number;
    cout << "Enter " << number<< " elements: " << endl;
    for(int i = 0; i < number; i++){
         cin >> arr[i];
    }
    vector <int> result;
    findSubsetSum(arr, number, 0, sum, result);
    for(int i = 0; i < result.size(); i++){
    cout << result[i] << " ";
    }
   return 0;
}