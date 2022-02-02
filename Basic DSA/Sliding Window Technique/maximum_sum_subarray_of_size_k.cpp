//Maximum sum subarray of size k
//GFG: https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Bruteforce: TC: O(n ^ 2)
    // int maximumSumSubarray(int K, vector<int> &Arr , int N){
    //     // code here 
    //     int max_sum = 0;
    //     for(int i = 0; i <= N - K; i++){
    //         int win_sum = 0;
    //         for(int j = i; j < i + K; j++){
    //             win_sum += Arr[j];
    //         }
    //         max_sum = max(max_sum, win_sum);
    //     }
    //     return max_sum;
    // }
    
    //Sliding Window Technique TC: O(n)
    // int maximumSumSubarray(int K, vector<int> &Arr , int N){
    //     int max_sum = 0;
    //     int win_sum = 0;
    //     for(int i = 0 ; i < K; i++){
    //         win_sum += Arr[i];
    //     }
    //     max_sum = win_sum;
    //     for(int i = 1; i <= N - K; i++){
    //         win_sum -= Arr[i - 1];
    //         win_sum += Arr[i + K - 1];
    //         max_sum = max(max_sum, win_sum);
    //     }
    //     return max_sum;
    // }
    
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        int max_sum = 0, sum = 0;
        int j = 0, i = 0;
        while(j < N){
            sum += Arr[j];
            if(j - i + 1 < K)
                j++;
            else if(j - i + 1 == K){
                max_sum = max(max_sum, sum);
                sum -= Arr[i];
                i++;
                j++;
            }
        }
        return max_sum;
    }
}