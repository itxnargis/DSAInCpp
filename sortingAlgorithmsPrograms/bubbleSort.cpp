#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector <int> &v){
     int size = v.size();
     for(int i = 0; i < size - 1; i++){
        bool flag = false;
        for(int  j = 0; j < size - i -1; j++){
            if(v[j] > v[j + 1]){
                swap(v[j], v[j + 1]);
            }
        }
     }
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
    bubbleSort(v);
    cout << "Elements after sorting: " << endl;
    for(int i = 0; i < size; i++){
        cout <<  v[i] << " ";
    }
    cout << endl;
   return 0;
}