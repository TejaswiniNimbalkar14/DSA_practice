// Find All Anagrams in a String
//leetcode: 438
//GFG: https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

#include <bits/stdc++.h>

using namespace std;

//Bruteforce TC: O(n * k)
// class Solution {
// public:
//     bool isAnagram(string a, string b){
//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());
//         if(a == b)  return true;
//         return false;
//     }
//     vector<int> findAnagrams(string s, string p) {
//         int i = 0, j = 0;
//         vector<int> res;
//         int k = p.length();
//         while(j < s.length()){
//             if(j - i + 1 < k)   j++;
//             else if(j - i + 1 == k){
//                 if(isAnagram(p, s.substr(i, j + 1)))
//                     res.push_back(i);
//             }
//         }
//         return res;
//     }
// };

//Sliding Window
// class Solution{
//     public:
//     vector<int> findAnagrams(string s, string p) {
//         int i = 0, j = 0;
//         vector<int> m1(26, 0);
//         vector<int> m2(26, 0);
//         int k = p.length();
//         for(int i = 0; i < k ; i++)
//             m1[p[i] - 'a']++;
        
//         vector<int> res;
//         while(j < s.length()){
//             m2[s[i] - 'a']++;
//             if(j - i + 1 < k)   j++;
//             else if(j - i + 1 == k){
//                 if(m1 == m2)    res.push_back(i);
//                 m1[s[i] - 'a']--;
//                 i++;
//                 j++;
//             }
//         }
//         return res;
//     }
// };

//Sliding Window TC: O(n) AS: O(k)
class Solution{
    public:
    vector<int> findAnagrams(string s, string p) {
        int i = 0, j = 0, count = 0, k = p.length();
        vector<int> res;
        map<char, int> mp;
        for(char c : p) mp[c]++;
        count = mp.size();
        while(j < s.length()){
            mp[s[j]]--;
            if(mp[s[j]] == 0)   count--;
            if(j - i + 1 < k)   j++;
            else if(j - i + 1 == k){
                if(count == 0)  res.push_back(i);
                mp[s[i]]++;
                if(mp[s[i]] == 1)   count++;
                i++;
                j++;
            }
        }
        return res;
    }
};