#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector <int> &v){
     int size = v.size();
     for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int  j =  i + 1; j < size; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }

        //placing minimum element at beginning
        if(i != minIndex){
            swap(v[i], v[minIndex]);
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
    selectionSort(v);
    cout << "Elements after sorting: " << endl;
    for(int i = 0; i < size; i++){
        cout <<  v[i] << " ";
    }
    cout << endl;
   return 0;
}