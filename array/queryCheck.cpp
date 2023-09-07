/*Given Q queries, check if the given number is present in the array or not.
* Note: Value of all the elements int the array is less than 10 to the power 5*/
#include<iostream>
#include<vector>
using namespace std;

   int main(){

int size;
cout << "Enter size of array: ";
cin >> size;
cout << "Enter" << size << " elements: " << endl;

vector <int> v(size);

for(int i = 0; i < size; i++){
    cin >> v[i];
}

const int N = 1e5 + 10;
vector <int> frequency(N, 0);
for(int i = 0; i < size; i++){
    frequency[v[i]]++;
}

cout<< "enter queries: " << endl;
int q;
cin >> q;

while(q--){
    int queryElement;
    cin >> queryElement;
    cout << "Times query occured: " << frequency[queryElement] << endl;
}

   return 0;
}