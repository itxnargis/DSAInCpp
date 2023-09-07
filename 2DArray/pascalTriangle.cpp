/*Given an integer n, return the first n rows of Pascal's triangle.*/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > pascalTriangle(int row){
    vector<vector<int> > pascal(row);

    for(int i = 0; i < row; i++){
        pascal[i].resize(i+1);

        for(int j = 0; j < i+1; j++){
            if(j == 0 || j == i){
                pascal[i][j] = 1;
            }
            else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

   int main(){
    int row;
    cout << "Enter size of row: " << endl;
    cin >> row;

    vector<vector<int> > answer;
    answer = pascalTriangle(row);

    for(int i = 0; i < answer.size(); i++){
        for(int j = 0; j < answer[i].size(); j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

   return 0;
}