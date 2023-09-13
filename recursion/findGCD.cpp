/* Given two number x and y.Find the GCD of x and y using recursion
    Input: x = 4 y = 9;
    Output : 1;
*/

#include<iostream>
using namespace std;

int findGCD(int number1, int number2){
    if(number2 > number1){
        return findGCD(number2, number1);
    }
    if(number2 == 0){
        return number1;
    }
    return findGCD(number2, number1 % number2);
}

   int main(){
    int number1, number2;
    cout << "Enter first number: " << endl;
    cin >> number1;
    cout << "Enter second number: " << endl;
    cin >> number2;

    cout << "GCD of " << number1 << " and " << number2 << " is: " << findGCD(number1, number2) << endl;


   return 0;
}