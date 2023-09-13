/* Given an integer, find out the sum of its digits using recursion*/
#include<iostream>
using namespace std;

// Base Case -> If (n >= 0 and n <= 9) return n;
// If you havea single digit number, the answer is number itself.

// Assumption Case -> Assume that fx. sum works correctly for n / 10.

// Self Work -> To the sum of digits of n / 10 , add the last digit of n i.e n % 10.

int sum(int number){
    if(number >= 0 && number <= 9){
        return number;
    }
    return sum(number / 10) + sum(number % 10);
}

   int main(){
    int number;
    cout << "Enter number: " << endl;
    cin >> number;
    cout << "Sum of " << number << " is: " << endl;

    int result = sum(number);
    cout << result << endl;

   return 0;
}