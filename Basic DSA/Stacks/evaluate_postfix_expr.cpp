//Evaluation of postfix expression using stack
//TC: O(|S|) AS: O(|S|)
//where, S is the length of input string or array
//Leetcode problem: 150
//GFG problem: https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1

#include<iostream>
#include<stack>
#include<math.h>
#include<vector>
using namespace std;

//GFG
class Solution{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        int o1, o2, i;
        stack<int> st;
        for(i = 0; i < S.length(); i++){
            if(S[i] >= '0' && S[i] <= '9'){
                st.push(S[i] - '0');
            } else {
                o2 = st.top();
                st.pop();
                o1 = st.top();
                st.pop();
                switch(S[i]){
                    case '+':
                        st.push(o1 + o2);
                        break;
                    case '-':
                        st.push(o1 - o2);
                        break;
                    case '*':
                        st.push(o1 * o2);
                        break;
                    case '/':
                        st.push(o1 / o2);
                        break;
                    case '^':
                        st.push(pow(o1, o2));
                        break;
                }
            }
        }
        return st.top();
    }
};

//Leetcode
// class Solution{
//     public:
//     int evalRPN(vector<string>& tokens) {
//         int o1, o2, i;
//         stack<int> st;
//         for(i = 0; i < tokens.size(); i++){
//             if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" 
//                || tokens[i] == "/" || tokens[i] == "^"){
//                 o2 = st.top();
//                 st.pop();
//                 o1 = st.top();
//                 st.pop();
//                 if(tokens[i] == "+")
//                     st.push(o1 + o2);
//                 else if(tokens[i] == "-")
//                     st.push(o1 - o2);
//                 else if(tokens[i] == "*")
//                     st.push(o1 * o2);
//                 else if(tokens[i] == "/")
//                     st.push(o1 / o2);
//                 else if(tokens[i] == "^")
//                     st.push(o1 ^ o2);
//             }
//             else {
//                 st.push(stoi(tokens[i]));
//             }
//         }
//         return st.top();
//     }
// };

int main(){
    //handle input-output here
}