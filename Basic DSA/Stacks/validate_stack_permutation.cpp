//Check if an array is valid stack permutation of other
//Leetcode: 946
//TC: O(n) AS: O(n)

#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int j = 0;
        for(int i = 0; i < pushed.size(); ++i){
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[j]){
                s.pop();
                ++j;
            }
        }
        return s.empty();
    }
};