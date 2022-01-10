//Implement queue using two stacks
//GFG:https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1#
//Leetcode: 232

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//TC: O(n) for push and O(1) for others
// class MyQueue {
// public:
//     stack<int> s1, s2;
//     MyQueue() {
        
//     }
    
//     void push(int x) {
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(x);
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
    
//     int pop() {
//         if(s1.empty())  return -1;
//         int y = s1.top();
//         s1.pop();
//         return y;
//     }
    
//     int peek() {
//         if(s1.empty())  return -1;
//         return s1.top();
//     }
    
//     bool empty() {
//         if(s1.empty())  return true;
//         return false;
//     }
// };


//O(1) for push, and empty() and (1) amotised for pop and peek
class MyQueue {
public:
    stack<int> in, out;
    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
   }
    
    int pop() {
        if(!out.empty()){
            int y = out.top();
            out.pop();
            return y;
        }
        else{
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
            int y = out.top();
            out.pop();
            return y;
        }
        return -1;
    }
    
    int peek() {
        if(!out.empty()){
            return out.top();
        }
        else{
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
            return out.top();
        }
        return -1;
    }
    
    bool empty() {
        if(in.empty() && out.empty())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */