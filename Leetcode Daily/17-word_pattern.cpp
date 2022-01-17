//word pattern
//leetcode: 290

#include<iostream>
using namespace std;

//TC: O(n) AS: O(2n)

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> v;
        string word;
        while(ss >> word)
            v.push_back(word);
        
        if(v.size() != pattern.length())
            return false;
        
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        for(int i = 0; i < pattern.length(); i++){
            if(mp1.count(pattern[i])){
                if(mp1[pattern[i]] != v[i])
                    return false;
            }
            
            if(mp2.count(v[i])){
                if(mp2[v[i]] != pattern[i])
                    return false;
            }
            mp1[pattern[i]] = v[i];
            mp2[v[i]] = pattern[i]; 
        }
        return true;
    }
};