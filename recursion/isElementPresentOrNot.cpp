/* Given an array of n integers and a target value x .
    * Print whether x exists in the array or not.
    * Input1 : n = 8, x = 14, array = [4, 12, 54, 14, 3, 6, 98, 87]
    * Output: YES

    * Input2: n = 1; x = 9; array = [7];
    * Output: NO
*/

bool isElementpresent(int *arr, int number, int elementToSearch, int index){
    if(index == number){
        return false;
    }
    return (arr[index] == elementToSearch) || isElementpresent(arr, number,elementToSearch, index + 1);
}

#include<iostream>
using namespace std;

   int main(){
    int number = 6, elementToSearch;
    int arr[] = {43, 212, 42, 12, 76, 98};

    cout << "Enter number you want to search: " << endl;
    cin >> elementToSearch;

    bool result = isElementpresent(arr, number, elementToSearch, 0);
    if(result){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }


   return 0;
}