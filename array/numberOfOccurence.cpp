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

    int sumElement;
    int lastOccurence = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == x){
            sumElement = i;
            lastOccurence++;
        }
    }
    cout << "Number of occurences of element x : " << lastOccurence;

   return 0;
}