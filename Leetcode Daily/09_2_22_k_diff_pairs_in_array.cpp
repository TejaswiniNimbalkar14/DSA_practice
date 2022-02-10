//K-diff unique pairs in an array
//leetcode: 532

#include<bits/stdc++.h>
using namespace std;

//Bruteforce will be using inner loops and some code to handle duplicates

//Another version of bruteforce
//didn't pass all test cases TC: O(n ^ 2)
// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         unordered_map<int, int> mp;
//         int count = 0;
//         sort(nums.begin(), nums.end());
//         int i = 0, j = 1;
//         if(k == 0){
//             for(int i : nums)   mp[nums[i]]++;
//             for(auto i : mp){
//                 if(i.second > 1)   count++;
//             }
//         } else {
//              while(i < j && j < nums.size()){
//                  while(nums[i] == nums[j]){
//                     i++;
//                     j++;
//                 }
//                 while(j < nums.size()){
//                     if(abs(nums[i] - nums[j]) == k){
//                         count++;
//                     }
//                     j++;
//                 }
//                 i++;
//                 j = i + 1;
//             }
//         }
       
//         return count;
//     }
// };

// class Solution{
//     public:
//     bool binarySearch(vector<int> v, int l, int h, int x){
//         while(l < h){
//             int mid = l + (h - l) / 2;
//             if(v[mid] == x) return true;
//             else if(v[mid] < x) return binarySearch(v, mid + 1, h, x);
//             else    return binarySearch(v, l, mid - 1, x);
//         }
//         return false;
//     }
//     int findPairs(vector<int>& nums, int k) {
//         int count = 0;
//         int i = 0;
//         sort(nums.begin(), nums.end());
//         while(i < nums.size()){
//             while(nums[i] == nums[i + 1]){
//                 i++;
//             }
//             if(binarySearch(nums, i + 1, nums.size(), abs(nums[i] + k))){
//                 count++;
//             }
//             i++;
//         }
//         return count;
//     }
// };

//Using hashmap
//TC: O(n) AS:O(n)
class Solution{
    public:
    int findPairs(vector<int>& nums, int k){
        int res = 0;
        unordered_map<int, int> mp;
        for(auto i : nums)  mp[i]++;
        // for(auto i : mp){
        //     if(k == 0){
        //         if(i.second > 1)    res++;
        //     } else {
        //         if(mp.count(i.first + k))
        //             res++;
        //     }
        // }
        if(k == 0){
            for(auto i : mp){
                if(i.second > 1)    res++;
            }
        } else {
            for(auto i : mp){
                if(mp.count(i.first + k))   res++;
            }
        }
        return res;
    }
};