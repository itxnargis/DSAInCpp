/* GIven a number n, find the increasing sequence from 1 to n without usong any loop
    Input = n = 4;
    output = 1 2 3 4;
*/
#include<iostream>
using namespace std;

void naturalNumbers(int number){
    if(number < 1){
        return;
    }
    naturalNumbers(number - 1);
    cout << number << " " << endl;
}

   int main(){
    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    cout << "Natural number till " << number << " is: " << endl;
    naturalNumbers(number);

   return 0;
}