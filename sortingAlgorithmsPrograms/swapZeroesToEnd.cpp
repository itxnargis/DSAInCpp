/*  Given an integer array arr, move all 0's to the end of if while maintaining the relative order of the non -zero     elements.
    * Note - Note that you must do this in-place without making a copy of the array.
    * Input : 0 5 0 4 42
    * Output : 5 4 42 0 0 
*/

#include<iostream>
#include<vector>
using namespace std;

void swapZeroesToEnd(vector <int> &v){
     int size  = v.size();
     for(int i = size - 1; i >= 0; i--){
        int j = 0;
        bool flag = false;
        while(j != i){
            if(v[j] == 0 && v[j + 1] != 0){
                swap(v[j], v[j + 1]);
                flag = true;
            }
            j++;
        }
        if(!flag){
            break;
        }
     }
     return;
}

   int main(){
    int size;
    cout << "Enter size: " << endl;
    cin >> size;
    cout << "Enter " << size << " elements: " << endl;
    cout << "Elements before sorting: " << endl;
    vector <int> v(size);
    for(int i = 0; i < size; i++){
        cin >> v[i];
    }
    swapZeroesToEnd(v);
    cout << "Elements after sorting: " << endl;
    for(int i = 0; i < size; i++){
        cout <<  v[i] << " ";
    }
    cout << endl;
   return 0;
}