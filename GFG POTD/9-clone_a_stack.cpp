//Clone a stack without using extra space
//GFG: https://practice.geeksforgeeks.org/problems/clone-a-stack-without-usinig-extra-space/1

#include<iostream>
#include<stack>
using namespace std;

class Solution{
    public:
    void pushBottomEle(stack<int> &st, stack<int> &cloned, int k){
        if(k == 0){
            cloned.push(st.top());
            return;
        }
        int temp = st.top();
        st.pop();
        pushBottomEle(st, cloned, k - 1);
        st.push(temp);
        return;
    }
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        //code here
        int k = st.size();
        while(k != 0){
            pushBottomEle(st, cloned, k - 1);
            k--;
        }
    }
};