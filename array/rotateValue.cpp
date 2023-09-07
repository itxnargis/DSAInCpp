/*Rotate the given array 'a' by k steps, where k is non-negative.
    Note: k can be greater than n as well where n is the size of array 'a'
    */

    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;

       int main(){

        // int arr[] = {1, 2, 3, 4, 5};
        // int n = 5;
        // int k = 2;

        // //k can be greater than n
        // k = k % n;

        // int answerArr[5];
        // int j = 0;

        // //Inserting last k element in answe array
        // for(int i = n-k; i < n; i++){
        //     answerArr[j++] = arr[i];
        // }

        // //Inserting first n-k elements in answe array
        // for(int i = 0; i <= k; i++){
        //     answerArr[j++] = arr[i];
        // }

        // for(int i = 0; i < n; i++){
        //     cout << answerArr[i] << " ";
        // }
        // cout << endl;

        vector <int> v = {1, 2, 3, 4, 5};
        int k = 2;

        k = k % v.size();

        reverse(v.begin(), v.end());
        reverse(v.begin(), v.begin()+k);
        reverse(v.begin()+k, v.end());

        for(int a: v){
            cout << a << " ";
        }
        cout << endl;

       return 0;
    }