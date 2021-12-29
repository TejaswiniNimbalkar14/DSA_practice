//Insert an element at the bottom of stack
//Coding Ninjas Problem: https://www.codingninjas.com/codestudio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=1

#include<iostream>
#include<stack>
using namespace std;

//TC: O(n) AS: O(1)

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

//Same approach with slight difference
// void solve1(stack<int>& s, int x){
//     if(s.empty())
//         s.push(x);
//     else {
//         //all the elements will get stored in call stack
//         //and when stack becomes empty, above code i.e. x will be pushed at bottom
//         int temp = s.top();
//         s.pop();
//         solve1(s, x);
     
//         //push elements back in stack
//         s.push(temp);
//         return;
//     }
// }
// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
//     // Write your code here.
//     solve1(myStack, x);
//     return myStack;
// }

int main(){
    //handle input-output here
}