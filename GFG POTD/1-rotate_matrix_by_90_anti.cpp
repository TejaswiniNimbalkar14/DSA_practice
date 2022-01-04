//Rotate a square matrix by 90^0 anticlockwise
//GFG Problem: https://practice.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space1004/1
//https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1
//https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1#

//TC: O(n^2) AS: O(1)
#include<iostream>
#include<vector>
using namespace std;

//Approach 1 - rotate element by element
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

//Approach 2 - first reverse every row and then make transpose
// class Solution{
// public:	
	
// 	void rotateMatrix(vector<vector<int>>& arr, int n) {
// 	    // code here   
        //reverse the rows
// 	    for(int i = 0; i < n; i++){
// 	        for(int j = 0; j < n / 2; j++){
// 	            int temp = arr[i][j];
// 	            arr[i][j] = arr[i][n - 1 - j];
// 	            arr[i][n - 1 - j] = temp;
// 	        }
// 	    }
	    
        //transpose
// 	    for(int i = 0; i < n; i++){
// 	        for(int j = i; j < n; j++){
// 	            if(i == j)
// 	                continue;
// 	            int temp = arr[i][j];
// 	            arr[i][j] = arr[j][i];
// 	            arr[j][i] = temp;
// 	        }
// 	    }
// 	}

// };

int main(){
    //handle input-output here
}