//Implement two stacks using one array
//TC : O(1)
//GFG Problem Link: https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1#

#include<iostream>
using namespace std;

#define n 100

class TwoStacks {
    int top1, top2;
    int* arr;

    public:
    TwoStacks() {
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(top1 == top2 || top1 == n - 1)
            return;
        
        top1++;
        arr[top1] = x;
    }

    //Function to push an integer into the stack2.
    void push2(int x)
    {
        if(top1 == top2 || top2 == 0)
            return;
    
        top2--;
        arr[top2] = x;
    }

    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1 == -1)
            return -1;
        
        return arr[top1--];
    }

    //Function to remove an element from top of the stack2.
    int pop2()
    {   
        if(top2 == n)
            return -1;
        
        return arr[top2++];
    }
};