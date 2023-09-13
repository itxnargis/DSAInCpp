#include<iostream>
using namespace std;

int fibonacci(int number){
    if(number == 0 || number == 1){
        return number;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}

   int main(){
    int number;
    cout << "Enter number: " << endl;
    cin >> number;
    cout << "fibonacci of index " << number << " is: " << endl;

    int result = fibonacci(number);
    cout << result << endl;

   return 0;
}