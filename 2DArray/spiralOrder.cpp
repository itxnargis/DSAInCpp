/*Given a positive integer n, generate an n * n matrix filled with elements from 1 to n2 in spiral order.
*/
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > createSpiralMatrix(int n){
    vector<vector<int> >matrix(n, vector<int> (n));
    int left = 0, top = 0;
    int right = n - 1;
    int bottom = n- 1;
    int direction = 0;
    int value = 1;

    while(top <= bottom && left <= right){
        // left --> right
        if(direction == 0){
            for(int i = left; i <= right; i++){
                matrix[top][i]= value++;
            }
            top++;
        }
        // top --> bottom
        else if(direction == 1){
            for(int i = top; i <= bottom; i++){
                matrix[i][right]= value++;
            }
            right--;
        }
        // right --> left
        else if(direction == 2){
            for(int i = right; i >= left; i--){
                matrix[bottom][i]= value++;
            }
           bottom--;
        }
        // bottom --> top
        else{
            for(int i = bottom; i >= top; i--){
                matrix[i][left]= value++;
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return matrix;
}

   int main(){
    int n;
    //n = size of matrix
    cout << "Enter matrix's size: "<< endl;
    cin >> n;

    vector<vector<int>>matrix(n, vector<int> (n));
    matrix = createSpiralMatrix(n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout <<  matrix[i][j] << "  ";
        }
        cout << endl;
    }
return 0;
}