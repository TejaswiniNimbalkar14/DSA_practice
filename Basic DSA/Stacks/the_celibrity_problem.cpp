//The celibrity problem
//GFG Problem Link: https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

#include<iostream>
#include<stack>
using namespace std;

class Solution 
{
    public:
    //Approach 1: Using 2 extra arrays(Graph)
    //TC: O(n^2) AS: O(2n)
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        int in[n] = {0}; 
        int out[n] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(M[i][j] == 1){
                    out[i]++;
                    in[j]++;
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            if(in[i] == n - 1 && out[i] == 0)
                return i;
        }
        return -1;
    }

    //Approach 2 - Without using extra space
    //TC: O(n) AS: O(1)
        // int c = 0;
        // for(int i = 1; i < n; i++){
        //     if(M[c][i] == 1)
        //         c = i;
        // }
        // for(int i = 0; i < n; i++){
        //     if(i != c && (M[c][i] == 1 || M[i][c] == 0))
        //         return -1;
        // }
        // return c;
        
    //Approach 3: Using stack
    //TC: O(n) AS: O(n)    
        //TC: O(n) AS: O(1)
        // stack<int> s;
        // for(int i = 0; i < n; i++)
        //     s.push(i);
            
        // int i = 0;
        // while(i < n - 1){
        //     int first = s.top();
        //     s.pop();
        //     int second = s.top();
        //     s.pop();
        //     if(M[first][second] == 1)
        //         s.push(second);
        //     else    s.push(first);
        //     i++;
        // }
        // //top can be celbrity
        // int c = s.top();
        // for(int i = 0; i < n; i++){
        //     if(i != c && (M[c][i] == 1 || M[i][c] == 0))
        //         return -1;
        // }
        // return c;
};

int main(){
    //handle input-output here
}