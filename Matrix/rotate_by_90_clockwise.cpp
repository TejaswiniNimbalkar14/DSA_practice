//Rotate a matrix by 90^0 in clockwise
//Leetcode: 48

#include<iostream>
using namespace std;
#define n 3
//Approach 1- using extra space
//TC: O(n^2) AS: O(1)
void rotateBy90ClockWise(int (&arr)[n][n]){
    int temp[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp[j][n - 1 - i] = arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = temp[i][j];
        }
    }
    
}

//Approach 2- in place TC: O(n^2) AS: O(1)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(i == j)
                    continue;
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < n/2; j++){
        //         int temp = matrix[i][j];
        //         matrix[i][j] = matrix[i][n - 1 - j];
        //         matrix[i][n - 1 - j] = temp;
        //     }
        // }
        
        //using reverse function of c++ STL
        for(int i = 0; i < n; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};
int main(){
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin>>arr[i][j];
    }

    rotateBy90ClockWise(arr);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout<<arr[i][j]<<" ";
    }

    return 0;
}