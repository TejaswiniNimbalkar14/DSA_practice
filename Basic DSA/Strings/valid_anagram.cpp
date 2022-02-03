//Valid Anagram
//leetcode: 242
//

#include<bits/stdc++.h>
using namespace std;

//Using C++ STL TC: O(nlogn) n = length of longer string
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length() != t.length())    return false;
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         if(s == t)  return true;
//         return false;
//     }
// };

//Using extra space and manual check
//TC: O(n) n=length of longer string AS: O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())    return false;
        map<char, int> mp;
        for(char c : s) mp[c]++;
        int count = mp.size();
        for(char c : t){
            mp[c]--;
            if(mp[c] == 0)  count--;
        }
        if(count == 0)  return true;
        return false;
    }
};