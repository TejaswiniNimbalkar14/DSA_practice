//Palidrome Partitioning
//Leetcode: 131

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        partition(0, s, res,path);
        return res;
    }
    void partition(int index, string s, vector<vector<string>> &res,
                   vector<string> &path){
        if(index == s.size()){
            res.push_back(path);
            return;
        }
        for(int i = index; i < s.size(); i++){
            if(isPalindrome(s, index, i)){
                path.push_back(s.substr(index, i - index + 1));
                partition(i + 1, s, res, path);
                path.pop_back();
            }
        }
    }
    bool isPalindrome(string s, int start, int end){
        while(start <= end){
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
};

int main() {
    //handle input-output here
}