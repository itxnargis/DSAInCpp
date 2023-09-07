/*Given an n*m matrix 'a'*, return all elements of the matrix in spiral order. */
/* 1. left --> right
        top++
   2. top --> bottom
        right--
   3. right --> left
       bottom--
   4. bottom --> top
        left++
*/

#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(vector<vector<int>> &matrix){
    int left = 0, top = 0;
    int right = matrix[0].size() - 1;
    int bottom = matrix.size()- 1;
    int direction = 0;
    while(top <= bottom && left <= right){
        // left --> right
        if(direction == 0){
            for(int columns = left; columns <= right; columns++){
                cout << matrix[top][columns] << " ";
            }
            top++;
        }
        // top --> bottom
        else if(direction == 1){
            for(int rows = top; rows <= bottom; rows++){
                cout << matrix[rows][right] << " ";
            }
            right--;
        }
        // right --> left
        else if(direction == 2){
            for(int columns = right; columns >= left; columns--){
                cout << matrix[bottom][columns] << " ";
            }
           bottom--;
        }
        // bottom --> top
        else{
            for(int rows = bottom; rows >= top; rows--){
                cout << matrix[rows][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

   int main(){
    int rows, columns;
    cout << "Enter size of rows: " << endl;
    cin >> rows;
    cout << "Enter size of columns: " << endl;
    cin >> columns;
    cout << "Matrix of " << rows << " x " << columns << " is: " << endl;

    vector<vector<int>>matrix(rows, vector<int> (columns));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
        cout << endl;
    }
     spiralOrder(matrix);
   return 0;
}