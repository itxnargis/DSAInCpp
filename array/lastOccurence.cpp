// /*Find last occurence of an element x in a given array using vector*/

// #include<iostream>
// #include<vector>
// using namespace std;

//    int main(){
//     int x;

//     vector <int> v(6);
//     cout << "Enter elements: " << endl;
//     for(int i = 0; i < 6; i++){
//         cin >> v[i];
//     }
//     cout << "Enter element you want to get the last occurence: ";
//     cin >> x;

//     int lastOccurence = -1;
//     for(int i = 0; i < v.size(); i++){
//         if(v[i] == x){
//             lastOccurence = i;
//         }
//     }
//     cout << "Index of last occurence of element x : " << lastOccurence;

//    return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

   int main(){
    int x;

    vector <int> v(6);
    cout << "Enter elements: " << endl;
    for(int i = 0; i < 6; i++){
        cin >> v[i];
    }
    cout << "Enter element you want to get the last occurence: ";
    cin >> x;

    int lastOccurence = -1;
    for(int i = v.size() - 1; i >= 0; i--){
        if(v[i] == x){
            lastOccurence = i;
            break;
        }
    }
    cout << "Index of last occurence of element x : " << lastOccurence;

   return 0;
}