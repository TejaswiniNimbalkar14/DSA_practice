//1's compliment
//GFG: https://practice.geeksforgeeks.org/problems/1s-complement2819/1

#include<iostream>
using namespace std;

class Solution{
    public:
    string onesComplement(string S,int N){
        //code here
        string res;
        for(int i = 0; i < N; i++){
            res += (S[i] == '0' ? '1' : '0');
        }
        return res;
    }
};