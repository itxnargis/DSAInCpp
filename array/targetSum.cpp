/*Find total number of pairs in the array whose sum is equal to the given value x */

#include<iostream>
#include<vector>
using namespace std;

   int main(){
    vector <int> v(5);
    cout << "Enter elements: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> v[i];
    }

    int count = 0, target;
    cout << "Enter target value: ";
    cin >> target;

    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] + v[j] == target){
                count++;
            }
        }
    }
    cout << count;
   return 0;
}