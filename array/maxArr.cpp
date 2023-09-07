#include<iostream>
using namespace std;

int maxArr(){
    int maxSize = 100;
    int arr[maxSize];
    int size;
    int max = 0;

    cout << "Enter size of array: " << endl;
    cin >> size;
    cout << "Enter " << size <<" elements: " << endl;
    for(int i = 0; i < size; i++){
         cin >> arr[i];

        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum value : ";
    return max;
}
   int main(){
    cout << maxArr();
   return 0;
}