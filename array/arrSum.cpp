// #include<iostream>
// using namespace std;

// int arrSum(int arr[], int size){
//     int sum = 0;
//     for(int i = 0; i < size; i++){
//         sum += arr[i];
//     }
//     return sum;
// }
//    int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout << arrSum(arr, size);

//    return 0;
// }

#include<iostream>
using namespace std;

int arrSum(){
    int size, sum = 0;
    int maxSize = 100;
    int arr[maxSize];
    cout << "Enter size of array: " << endl;
    cin >> size;
    cout << "Enter " << size <<" elements: " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of elements of array is: ";
    return sum;
}
   int main(){
    cout << arrSum();
   return 0;
}