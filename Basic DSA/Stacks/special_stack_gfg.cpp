//Get minimum element of a stack
//GFG Problem: https://practice.geeksforgeeks.org/problems/special-stack/1#

#include<iostream>
#include<stack>
using namespace std;

//Approach 1: Using extra space
//TC: O(1) AS: O(N)
//refer min_element_of_stack.cpp

//Approach2: without using extra space
//TC: O(1) AS: O(1)

int minEle = 99999;
void push(stack<int>& s, int a){
	// Your code goes here
	if(s.empty()){
	    s.push(a);
	    minEle = a;
	}else{
	    if(minEle > a){
	        s.push(2 * a - minEle);
	        minEle = a;
	    }
	    else s.push(a);
	}
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size() == n)
	    return true;
	else return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.empty())
	    return true;
	else    return false;
}

int pop(stack<int>& s){
	// Your code goes here
	int v = s.top();
	if(s.top() >= minEle) {
	    s.pop();
	    return v;
	}
	else{
	    int temp = minEle;
	    minEle = 2 * minEle - v;
	    s.pop();
	    return temp;
	}
}

int getMin(stack<int>& s){
	// Your code goes here
	return minEle;
}

int min(){
    //handle input-output here
}