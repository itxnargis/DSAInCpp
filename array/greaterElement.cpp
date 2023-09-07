/*Count the number of elements strictly greater than value x*/

#include<iostream>
#include<vector>
using namespace std;

   int main(){

    vector <int> v(6);
    cout << "Enter elements: " << endl;
    for(int i = 0; i < 6; i++){
        cin >> v[i];
    }

    int x;
    int count = 0;
    cout << "Enter the number you want to check: ";
    cin >> x;

    for(int i = 0; i < v.size(); i++){
        if(v[i] > x){
            count++;
        }
    }
    cout << "Number of elements greater than " << x << " is: " << count;

   return 0;
}