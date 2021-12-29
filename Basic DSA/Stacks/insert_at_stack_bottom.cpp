//Insert an element at the bottom of stack
//Coding Ninjas Problem: https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=1

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& s, int x, int k){
    if(k == 0){
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    
    solve(s, x, k - 1);
    s.push(temp);
    return;
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    int k = myStack.size();
    solve(myStack, x, k);
    return myStack;
}

int main(){
    //handle input-output here
}