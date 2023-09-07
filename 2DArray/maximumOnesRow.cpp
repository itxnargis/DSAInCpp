/*Given a boolean 2D array, where each row is sorted.Find the row with the max. number of 1s.*/
#include<iostream>
#include<vector>
using namespace std;

int maximumOnesRow(vector<vector<int> > &V){
    int leftMostOnes = -1;
    int maxOnesRow = -1;
    int j = V[0].size()-1;

    while(j >= 0 && V[0][j] == 1){
        leftMostOnes = j;
        maxOnesRow = 0;
        j--;
    }

    for(int i = 1; i < V.size(); i++){
        while(j >= 0 && V[i][j] == 1){
            leftMostOnes = j;
            j--;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}

   int main(){
    int row, column;
    cout << "Enter size of row: " << endl;
    cin >> row;
    cout << "Enter size of column: " << endl;
    cin >> column;
    cout << "Enter matrices of " << row << "and "<< column << " column is: " << endl;

    vector<vector<int> >matrix(row, vector<int> (column));
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> matrix[i][j];
        }
    }
    int result = maximumOnesRow(matrix);
    cout << "The maximum ones row index is: " << result << endl;


    return 0;
}