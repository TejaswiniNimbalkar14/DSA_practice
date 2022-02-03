//Excel Sheet | Part - 1 
//GFG: https://practice.geeksforgeeks.org/problems/excel-sheet5448/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string ExcelColumn(int N)
    {
        // Your code goes here
        string ans = "";
        while(N){
            int rem = N % 26;
            if(rem == 0){
                ans = 'Z' + ans;
                N = N / 26 - 1;
            } else {
                char c = 'A' + rem - 1;
                ans = c + ans;
                N /= 26;
            }
        }
        return ans;
    }
};