//Logest valid parenthesis
//GFG Problem: https://practice.geeksforgeeks.org/problems/valid-substring0624/1#
//Leetcode : 32

#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        if(n == 0)  return 0;
        
        int maxLen = 0;
        
        //Approach 1 - using two stacks st_c & st_i
        // stack<int> st_i;
        // st_i.push(-1);
        
//         stack<char> st_c;
//         for(int i = 0; i < n; i++){
//             if(s[i] == '('){
//                 st_i.push(i);
//                 st_c.push(s[i]);
//             } else {
//                 if(!st_c.empty() && st_c.top() == '('){
//                     st_i.pop();
//                     st_c.pop();
                    
//                     maxLen = max(maxLen, i - st_i.top());
//                 } else {
//                     st_i.push(i);
//                 }
//             }
//         }
        
        //Approach 2 - using only one stack st_i
        // for(int i = 0; i < n; i++){
        //     if(s[i] == '('){
        //         st_i.push(i);
        //     } else {
        //         st_i.pop();
        //         if(!st_i.empty())
        //             maxLen = max(maxLen, i - st_i.top());
        //         else    st_i.push(i);
        //     }
        // }
        
        //Approach 3 - in O(1) space
        int left, right;
        left = right = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '(')
                left++;
            else    right++;
            
            if(left == right)
                maxLen = max(maxLen, left + right);
            else if(right > left)
                left = right = 0;
        }
        
        left = right = 0;
        for(int i = n - 1; i >= 0; i--){
            if(s[i] == '(')
                left++;
            else    right++;
            
            if(left == right)
                maxLen = max(maxLen, left + right);
            else if(left > right)
                left = right = 0;
        }
        
        return maxLen;
    }
};

int main(){
    //handle input - output here
}