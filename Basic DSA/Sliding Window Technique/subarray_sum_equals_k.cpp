//Subarray Sum Equals K
//leetcode: 560

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count = 0;
        int sum = 0;
        mp[sum] = 1;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(mp.find(sum - k) != mp.end())
                count += mp[sum - k];
            
            mp[sum]++;
        }
        return count;
    }
};