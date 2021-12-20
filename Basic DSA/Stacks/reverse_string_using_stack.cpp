//Reverse a string using stack
//TC: O(n) AS: O(n)
//GFG Problem: https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1#

#include<iostream>
#include<stack>
#include<string>
using namespace std;

//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    char* arr;
    arr = new char[len];
    stack<int> st;
    for(int i = 0; i < len; i++){
        st.push(S[i]);
    }
    for(int i = 0; i < len; i++){
        arr[i] = st.top();
        st.pop();
    }
    return arr;
} 

int main() {
    //handle input-output here
}