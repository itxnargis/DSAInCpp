/* GIven a number n and a value k. Print k multiples of number
    Input = n = 4, k = 4;
    output = 4 8 12 16;
*/
#include<iostream>
using namespace std;

void multiplyNumbers(int number, int k){
    if(k <= 0){
        return;
    }
    multiplyNumbers(number, k - 1);
    cout << number * k << " " << endl;
}

   int main(){
    int number, k;
    cout << "Enter number: " << endl;
    cin >> number;
     cout << "How many  multiples you want to print: " << endl;
    cin >> k;

    cout << k << " multiples of " << number << " is: " << endl;
    multiplyNumbers(number, k);

   return 0;
}