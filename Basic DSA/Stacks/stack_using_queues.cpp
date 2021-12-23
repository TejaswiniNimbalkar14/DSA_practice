//Implement a stack using queues
//Leetcode Problem: 225
//GFG Problem: https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1#

#include<iostream>
#include<queue>
using namespace std;

//Approach 1: Using tw stacks
//TC: O(N) for push and O(1) for others. AS: O()
class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1, q2);
    }
    
    int pop() {
        if(q2.empty())
            return -1;
        int res = q2.front();
        q2.pop();
        return res;
    }
    
    int top() {
        if(q2.empty())
            return true;
        return q2.front();
    }
    
    bool empty() {
        if(q2.empty())
            return true;
        return false;
    }
};

//Approach 2: Using 1 queue
//TC: O(N) for push and O(1) for others. AS: O(1)
    //push function of this approach
    // void push(int x) {
    //     q1.push(x);
    //     int s = q1.size() - 1;
    //     while(s--){
    //         int t = q1.front();
    //         q1.pop();
    //         q1.push(t);
    //     }
    // }

int main() {
    //handle input-output here
}