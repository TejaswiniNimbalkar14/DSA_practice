//No of good pairs
//Leetcode 1512

#include<iostream>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        //O(n^2)
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j])
                    count++;
            }
        }
        return count;

        //O(n) - Using HashTables
        int count = 0;
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            count += mp[nums[i]];
            ++mp[nums[i]];
        }
        return count;
    }
};