/* An array of integers 'a' that is sorted in no- decreasing order.
  * Find the first and last position of the given 'target' element in the sorted array.
  * Follow 0-based indexing
  * If target is not found then return [-1, -1].
 */
#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector <int> &input, int target){
    int low =  0;
    int high = input.size() - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(input[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else if(input[mid] < target){
            low = mid + 1;
        }
        else {
             high = mid - 1;
        }
    }
    return ans;
}

int upperBound(vector <int> &input, int target){
    int low =  0;
    int high = input.size() - 1;
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(input[mid] > target){
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

   int main(){
    int sizeOfArray;
    cout << "Enter size of array: " << endl;
    cin >> sizeOfArray;
    cout << "Enter " << sizeOfArray << " is: " << endl;
    vector <int> input;
    for(int i = 0; i < sizeOfArray; i++){
        int elements;
        cin >> elements;
        input.push_back(elements);
    }

    int target;
    cout << "Enter target element: " << endl;
    cin >> target;
    vector <int> result;
    cout << "Lower and upper bound of target element is: "<< endl;
    int lb = lowerBound(input, target);
    if(input[lb] != target){
        result.push_back(-1);
        result.push_back(-1);
    }
    else {
        int ub = upperBound(input, target);
        result.push_back(lb);
        result.push_back(ub - 1);
    }
    cout << result[0] << " " << result[1] << endl;

   return 0;
}