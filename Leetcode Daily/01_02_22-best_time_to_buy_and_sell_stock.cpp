//Best time to buy and sell stock
//leetcode: 121

#include<bits/stdc++.h>
using namespace std;

//Aproach1: for every i & j, i < j, do:
//max_pro = max(max_pro, prices[j] - prices[i])
//TC: O(n * 2) AS: O(1)

//Approach 2: using extra space
//TC: O(n) AS: O(n)
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         stack<int> st;
//         int n = prices.size();
//         int min_buy = prices[n - 1];
//         int max_pro = 0;
//         st.push(prices[n - 1]);
//         for(int i = n - 2; i  >= 0; i--){
//             if(st.top() > prices[i]){
//                 min_buy = min(min_buy, prices[i]);
//             } else{
//                 st.push(prices[i]);
//                 min_buy = prices[i];
//             }
//             max_pro = max(max_pro, st.top() - min_buy);
//         }
//         return max_pro;
//     }
// };

//Approach 3: Without usng extra space
//TC: O(n) AS: O(1)
class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int min_buy = prices[0];
        int max_pro = 0;
        for(int i = 1; i < prices.size(); i++){
            min_buy = min(min_buy, prices[i]);
            max_pro = max(max_pro, prices[i] - min_buy);
        }
        return max_pro;
    }
};