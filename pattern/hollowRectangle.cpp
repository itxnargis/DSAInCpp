#include<iostream>
using namespace std;

   int main(){
    int rows, column;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> column;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= column; j++){
            if(i == 1 || i == rows || j == 1 || j == column){
                cout << "*";
            }
        }
        cout << endl;
    }
   return 0;
}