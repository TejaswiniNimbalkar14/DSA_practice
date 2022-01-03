//Find if an expression contains redundant braces
//Coding ninjas: https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=2

#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string s)
{
    stack<char> st_c;
    // Write your code here.
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ')')
            st_c.push(s[i]);
        else {
            bool ans = true;
            while(!st_c.empty() && st_c.top() != '('){
                char c = st_c.top();
                st_c.pop();
                if(c == '+' || c == '-' || c == '*' || c == '/')
                	ans = false;
            }
            st_c.pop();
            if(ans == true)
            	return true;
        }
    }
    return false;
}


int main() {
    //handle input-output here
}