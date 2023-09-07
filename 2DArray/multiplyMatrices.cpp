#include<iostream>
using namespace std;

   int main(){
    int firstRowSize, firstColumnSize;
    cout << "Enter number of rows in first matrix: " << endl;
    cin >> firstRowSize;
    cout << "Enter number of columns in first matrix: " << endl;
    cin >> firstColumnSize;

    cout << "Enter matrices: " << endl;
    int A[firstRowSize][firstColumnSize];
    for(int i = 0; i < firstRowSize; i++){
        for(int j = 0; j < firstColumnSize; j++){
            cin >> A[i][j];
        }
    }

    int secondRowSize, secondColumnSize;
    cout << "Enter number of rows in second matrix: " << endl;
    cin >> secondRowSize;
    cout << "Enter number of columns in second matrix: " << endl;
    cin >> secondColumnSize;

    cout << "Enter matrices: " << endl;
    int B[secondRowSize][secondColumnSize];
    for(int i = 0; i < secondRowSize; i++){
        for(int j = 0; j < secondColumnSize; j++){
            cin >> B[i][j];
        }
    }

    if(firstColumnSize != secondRowSize){
        cout << "Matrix Multiplication is not possible in this input." << endl;
    }

    int C[firstRowSize][secondColumnSize];
    for(int i = 0; i < firstRowSize; i++){
        for(int j = 0; j < secondColumnSize; j++){
            int value = 0;
            for(int k = 0; k < secondRowSize; k++){
                value += A[i][k] * B[k][j];
            }
            C[i][j] = value;
        }
    }

    for(int i = 0; i < firstRowSize; i++){
        for(int j = 0; j < secondColumnSize; j++){
                cout << C[i][j] << " ";
            }
            cout <<  endl;
        }
   return 0;
}