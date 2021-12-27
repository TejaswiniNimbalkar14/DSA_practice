//Delete middle element of a stack
//TC: https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
//GFG Problem: 
//TC: O(k)

#include<iostream>
#include<stack>
using namespace std;

class Solution{
    public:
    void deleteMid(stack<int>&s, int n){
        if(n == 0)
            return;
            
        int k = (n / 2) + 1;
        solve(s, k);
    }
    
    void solve(stack<int>&s, int k){
        if(k == 1){
            s.pop();
            return;
        }
        
        int temp = s.top();
        s.pop();
        
        solve(s, k - 1);
        s.push(temp);
        return;
    }
};

int main() {
    //handle input-output here
}