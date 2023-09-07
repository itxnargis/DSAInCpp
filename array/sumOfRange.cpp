/* Given an array of integers of size n.Answer q queries where you need tot print the sum of values in a given range of indices from l to r(both included)

Note: The values of l and r in queries follow l- based indexing.*/
#include<iostream>
#include<vector>
using namespace std;

//0 5 1 2 3 4
// 0 5  6 8 11 15 -> prefix sum array
//l = 1, r = 3;
// ans = 8 - 0 = 8;
   int main(){
     int size;
    cout << "Enter size of the element: " << endl;
    cin >> size;
    cout <<"Enter " << size << " elements: " << endl;

    vector <int> arr(size+1, 0);
    for(int i = 1; i <= size; i++){
        cin >> arr[i];
    }

    //Calculate prefix sum array
    for(int i = 1;i <= size; i++){
        arr[i] += arr[i-1];
    }

    int q;
    cin >> q;

    while(q--){
        int l, r;
        cin >> l >> r;

        int ans = 0;
        //ans = prefixSumArray[r] - prefixSumArray[l-1]
        ans = arr[r] - arr[l-1];
    cout << ans << endl;
    }
   return 0;
}