//Sort a stack using recursion
//GFG Problem: https://practice.geeksforgeeks.org/problems/sort-a-stack/1#

#include<iostream>
#include<stack>
using namespace std;


//TC: O(n^2) AS: O(n) recursive
void insertAtCorrect(stack<int> &s, int x){
    if(s.empty() || s.top() <= x)
        s.push(x);
    else {
        int temp = s.top();
        s.pop();
        insertAtCorrect(s, x);
        s.push(temp);
    }
}

void sortStack(stack<int> &s){
    if(s.empty())
        return;
        
    int x = s.top();
    s.pop();
    sortStack(s);
    insertAtCorrect(s, x);
}
void SortedStack :: sort()
{
   //Your code here
   sortStack(s);
}

int main(){
    //handle input-output here
}