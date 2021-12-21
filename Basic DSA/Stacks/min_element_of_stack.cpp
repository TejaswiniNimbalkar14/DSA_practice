//get minimum element of a stack
//Leetcode problem : 155 Min Stack
//GFG problem: https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1#

#include<iostream>
#include<stack>
using namespace std;

//Approach 1: Using extra space
//TC: O(1) AS: O(N)

// class MinStack {
// public:
//     stack<int> s, ss;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         s.push(val);
//         if(ss.empty() || ss.top() >= val)
//             ss.push(val);
//     }
    
//     void pop() {
//         if(s.empty())
//             return;
//         if(ss.top() == s.top())
//             ss.pop();
//         s.pop();
//     }
    
//     int top() {
//         if(s.empty())
//             return -1;
//         return s.top();
//     }
    
//     int getMin() {
//         if(ss.empty())
//             return -1;
//         return ss.top();
//     }
// };

//Approach2: without using extra space
//TC: O(1) AS: O(1)
class MinStack {
public:
    stack<long long> s;
    long long minEle;
    MinStack() {
        
    }
    
    void push(int val) {
        long long v = val;
       if(s.empty()){
           minEle = v;
           s.push(v);
       }
        if(v >= minEle)
            s.push(v);
        else{
            long long temp = 2 * v * 1LL - minEle;
            s.push(temp);
            minEle = v;
        }
    }
    
    void pop() {
        if(s.empty())   return;
        long long t = s.top();
        s.pop();
        if(t < minEle){
            minEle = 2 * minEle - t;
        }
        
    }
    
    int top() {
        if(s.empty())
            return -1;
        long long t = s.top();
        if(t < minEle){
            return minEle;
        }
        else return t;
    }
    
    int getMin() {
        
        return minEle;
    }
};

int main() {
    //handle input output here
}