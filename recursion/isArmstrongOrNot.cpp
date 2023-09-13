/* Given a number n. Print if it is an armstrong number or not */
#include<iostream>
using namespace std;

int powerFind(int number1, int number2){
    if(number2 == 0){
        return 1;
    }
    if(number2 % 2 == 0){
    int result = powerFind(number1, number2 / 2);
        return result * result;
    }

    else{
        int result = powerFind(number1, (number2 - 1) / 2);
        return  number1 * result * result;
    }
}

int isArmstrongOrNot(int number, int numberOfDigits){
    if(number == 0){
        return 0;
    }
    return powerFind(number % 10, numberOfDigits) + isArmstrongOrNot(number / 10, numberOfDigits);
}

   int main(){
    int number;
    cout << "Enter number: " << endl;
    cin >> number;

    int numberOfDigits = 0;
    int temp = number;
    while(temp > 0){
        temp /= 10;
        numberOfDigits++;
    }

    int result = isArmstrongOrNot(number, numberOfDigits);
    if(result == number){
        cout << "YES" << endl;
    }
    else{
    cout << "NO" << endl;
    }

   return 0;
}