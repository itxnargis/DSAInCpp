/* Write a program to check whether a given number is palindrome or not */

#include<iostream>
using namespace std;

bool palindrome(int number, int *temp){
    if(number >= 0 && number <= 9){
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /= 10;
        return(number == lastDigitOfTemp);
    }
    bool result = (palindrome(number/ 10, temp) && (number % 10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}

   int main(){
    int number;
    cout << "Enter number: " << endl;
    cin >> number;
    int anotherNumber = number;

    int *temp =  &anotherNumber;
    cout << palindrome(number, temp);


   return 0;
}