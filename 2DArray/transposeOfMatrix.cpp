#include<iostream>
using namespace std;

   int main(){
    int rowSize, columnSize;
    cout << "Enter number of rows : " << endl;
    cin >> rowSize;
    cout << "Enter number of columns : " << endl;
    cin >> columnSize;

    cout << "Enter matrices: " << endl;
    int A[rowSize][columnSize];
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < columnSize; j++){
            cin >> A[i][j];
        }
    }
        int transposeArray[columnSize][rowSize];
        for(int i = 0; i < columnSize; i++){
        for(int j = 0; j < rowSize; j++){
            transposeArray[i][j] = A[j][i];
        }
    }
    for(int i = 0; i < columnSize; i++){
        for(int j = 0; j < rowSize; j++){
            cout << transposeArray[i][j] << " ";
        }
        cout << endl;
    }
   return 0;
}