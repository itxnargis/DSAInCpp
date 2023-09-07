 #include<iostream>
using namespace std;

   int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int key;
    int size = sizeof(arr)/sizeof(arr[0]);
    int answer = -1;
    cout << "Enter element to be search: ";
    cin >> key;
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
        answer = i;
        break;
        }
    }
     cout << "Index of searched key is: " << answer << endl;
   return 0;
}