/*Given a square matrix, turn it by 90 degrees in a clockwise direction without using any extra space*/

/* Example - 1 2 3        7 4 1
             4 5 6   ==>  8 5 2
             7 8 9        9 6 3  */

#include<iostream>
#include<vector>
using namespace std;

   int main(){
    int sizeOfMatrix;
    cout << "Enter size of matrix: " << endl;
    cin >> sizeOfMatrix;
    cout << "Matrix of " << sizeOfMatrix << " x " << sizeOfMatrix << " column is: " << endl;

    vector<vector<int> > matrix(sizeOfMatrix, vector<int>(sizeOfMatrix));
    for(int i = 0; i < sizeOfMatrix; i++){
        for(int j = 0; j < sizeOfMatrix; j++){
            cin >> matrix[i][j];
        }
    }
   return 0;
}