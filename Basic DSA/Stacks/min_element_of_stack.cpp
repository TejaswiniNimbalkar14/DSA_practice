//get minimum element of a stack
//Leetcode problem : 155 Min Stack
//GFG problem: https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1#

#include<iostream>
#include<stack>
using namespace std;

//Approach 1: Using extra space
//TC: O(1) AS: O(N)

class MinStack {
public:
    stack<int> s, ss;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(ss.empty() || ss.top() >= val)
            ss.push(val);
    }
    
    void pop() {
        if(s.empty())
            return;
        if(ss.top() == s.top())
            ss.pop();
        s.pop();
    }
    
    int top() {
        if(s.empty())
            return -1;
        return s.top();
    }
    
    int getMin() {
        if(ss.empty())
            return -1;
        return ss.top();
    }
};

int main() {
    //handle input output here
}