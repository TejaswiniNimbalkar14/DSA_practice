//Maximum sum of increasing order elements from n arrays
//GFG: https://practice.geeksforgeeks.org/problems/maximum-sum-of-increasing-order-elements-from-n-arrays4848/1

#include<iostream>
using namespace std;

int maximumSum( int n,int m, vector<vector<int>> &a) {

    // Complete the function
    int max_sum = 0;
    int prev_max = INT_MAX;
    for(int i = n - 1; i >= 0; i--){
        int max_lower = INT_MIN;
        for(int j = 0; j < m; j++){
            if(a[i][j] < prev_max){
                max_lower = max(max_lower, a[i][j]);
            }        
        }
        if(max_lower == INT_MIN)    return 0;
        max_sum += max_lower;
        prev_max = max_lower;
    }
    return max_sum;
}