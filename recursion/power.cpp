/* Find the value p ^ q usong a recursive function*/

#include<iostream>
using namespace std;

int powerFind(int number1, int number2){
    if(number2 == 0){
        return 1;
    }
    if(q % 2 == 0){
    int result = powerFind(number1, number2 / 2);{
        return result * result;
    }
    }
    else{
        int result = powerFind(number1, (number2 - 1) / 2);
        return  number1 * result * result;
    }
}

// int power(int number1, int number2){
//     if(number2 == 0){
//         return 1;
//     }
//     return number1 * power(number1, number2 - 1);
// }

   int main(){
    int number1, number2;
    cout << "Enter first number: " << endl;
    cin >> number1;
    cout << "Enter second number: " << endl;
    cin >> number2;
    cout << number1 << " ^ " << number2 << " is: " << endl;

    int result = powerFind(number1, number2);
    cout << result << endl;

   return 0;
}