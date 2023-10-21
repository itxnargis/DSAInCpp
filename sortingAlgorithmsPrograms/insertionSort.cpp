#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector <int> &v){
     int size = v.size();
     for(int i = 0; i < size; i++){
        int currentElement = v[i];
        int  j = i - 1;
        //find currect position for correct element
        while(j >= 0 && v[j] > currentElement){
            v[j + 1] = v[j];
            j--;
        }
        //Insert current element
        v[j + 1] = currentElement;
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
    insertionSort(v);
    cout << "Elements after sorting: " << endl;
    for(int i = 0; i < size; i++){
        cout <<  v[i] << " ";
    }
    cout << endl;
   return 0;
}