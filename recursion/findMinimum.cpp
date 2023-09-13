/* There are N stones , numbered 1, 2,-------- N. For each (1 <= i <= N), the height of stone i is hi.There is a frog who is initially on stone 1. He will repeat the following action some number of times to reach stone N:

    * If the frog is currently on stone i, jump to stone i + 1 or stone i + 2.
    * Here, a cost of |hi - hj| is incurred, where  j is the stone to land on.

    * Find the minimum possible total cost incurred before the frog reaches stone N.

*/

#include<iostream>
using namespace std;

int findMin(int *h, int number, int i){
    if(i == number - 1){
        return 0;
    }
    if(i == number -2){
        return findMin(h, number, i + 1) + abs(h[i] - h[i + 1]);
    }

    return min(findMin(h, number, i + 1) + abs(h[i] - h[i + 1]), findMin(h, number, i + 2) + abs(h[i] - h[i + 2]));
}

   int main(){
    int number;
    int arr[20];
    cout << "Enter number: " << endl;
    cin >> number;
    cout << "Enter " << number<< " elements: " << endl;
    for(int i = 0; i < number; i++){
         cin >> arr[i];
    }

    cout << "Minimum possible cost is: " << findMin(arr, number, 0)  << endl;




   return 0;
}