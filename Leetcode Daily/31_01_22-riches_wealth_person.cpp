//Richest Customer Wealth
//leetcode: 1672
//TC: O(n*m)

#include<bits/stdc++.h>
using namespace std;

//Approach 1: by iteration
// class Solution {
// public:
//     int maximumWealth(vector<vector<int>>& accounts) {
//         int maxWealth = 0;
//         for(int i = 0; i < accounts.size(); i++){
//             int sum = 0;
//             for(auto w : accounts[i]){
//                 sum += w;
//             }
//             maxWealth = max(maxWealth, sum);
//         }
//         return maxWealth;
//     }
// };

//Approach 2: using C++ STL
class Solution{
    public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(auto b : accounts){
            maxWealth = max(maxWealth, accumulate(b.begin(), b.end(), 0));
        }
        return maxWealth;
    }
};