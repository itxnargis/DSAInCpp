/* GIven a number n, find the sum lf natural numbers till n but with alternate signs.
    Input = n = 5;
    output = 1 - 2 + 3 - 4 + 5 = 3;
*/
#include<iostream>
using namespace std;

int naturalNumbers(int number){
    if(number == 0){
        return 0;
    }
    return naturalNumbers(number - 1) + ((number % 2 == 0)? (-number): (number));
}

   int main(){
    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    cout << "Natural number till " << number << " is: " << naturalNumbers(number) << endl;


   return 0;
}