/* Find the first occurence of a given number element x,
 *  Given that the given array is sorted.
 *  If no occurence of x is found then return -1
*/
#include<iostream>
#include<vector>
using namespace std;

int firstOccurenceOfTarget(vector <int> &input, int target){
    int low = 0;
    int high = input.size() - 1;
    int ans = -1;

    while(low <= high){
       int mid = low + (high - low)/ 2;

        if(input[mid] == target){
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

   int main(){
    int sizeOfArray;
    cout << "Enter size of array: " << endl;
    cin >> sizeOfArray;
     cout << "Enter " << sizeOfArray << " elements: " << endl;

    vector <int> array;
    for(int i = 0; i < sizeOfArray; i++){
        int elements;
        cin >> elements;
        array.push_back(elements);
    }

    int target;
    cout << "Enter target value to find: "<< endl;
    cin >> target;
    cout << "First occurence of target index is: " << firstOccurenceOfTarget(array, target) << endl;

   return 0;
}