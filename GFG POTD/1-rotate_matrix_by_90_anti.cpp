//Rotate a square matrix by 90^0 anticlockwise
//TC: O(n^2) AS: O(1)
#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
   int n = matrix.size();
   for(int i = 0; i < n / 2; i++){
       for(int j = i; j < n - i - 1; j++){
           int temp = matrix[i][j];
           matrix[i][j] = matrix[j][n - 1 - i];
           matrix[j][n - 1 - i] = matrix[n - 1 - i][n - 1 - j];
           matrix[n - 1 - i][n - 1 - j] = matrix[n - 1 - j][i];
           matrix[n - 1 - j][i] = temp;
       }
   }
}

int main(){
    //handle input-output here
}