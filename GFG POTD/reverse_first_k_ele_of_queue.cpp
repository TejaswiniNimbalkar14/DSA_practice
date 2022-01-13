//Reverse first k elements of queue

#include<iostream>
using namespace sdt;

queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    for(int i = 1; i <= k; i++){
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    int n = q.size();
    for(int i = 1; i <= n - k; i++){
        q.push(q.front());
        q.pop();
    }
    
    return q;
}