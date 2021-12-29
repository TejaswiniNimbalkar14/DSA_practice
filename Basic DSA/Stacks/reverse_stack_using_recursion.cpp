//Reverse a stack using recursion
//Coding Ninjas: https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875?leftPanelTab=0

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& s, int x) {
    if(s.empty())
        s.push(x);
    else {
        int temp = s.top();
        s.pop();
        
        inserAtBottom(s, x);
        
        s.push(temp);
        return;
    }
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    int x = stack.top();
    s.pop();
    
    reverseStack(stack);
    
    insertAtBottom(stack, x);
    return;
}

int main(){
    //handle input-output here
}