//Check if a string has balanced parenthesis
//TC: O(n) AS: O(n);
//Leetcode proble 20. Valid parenthesis

#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else{
                if(st.empty())  return false;
                char c = st.top();
                st.pop();
                if((s[i] == ')' && c == '(') || (s[i] == ']' && c == '[')
                   || (s[i] == '}' && c == '{') )
                    continue;
                else return false;
            }
        }
        if(st.empty())
            return true;
        else return false;
    }
};

int main() {
    string str;
    //only '(', ')', '[', ']', '{', '}' are allowed
    cin>>str;
    Solution s;
    if(s.isValid(str))
        cout<<"Valid";
    else cout<<"Not valid";

    return 0;
}