//Search pattern occurrences in string
//GFG Problem: https://practice.geeksforgeeks.org/problems/8dcd25918295847b4ced54055eae35a8501181c1/1#
//TC: O(n * m) AS: O(1)

#include<iostream>
using namespace std;

class Solution{
    public:
        vector <int> search(string pat, string txt)
        {
            //code hee.
            vector<int> v;
            for(int i = 0; i < txt.length(); i++){
                int k = 0;
                int j = i;
                while(k < pat.length() && j < i + pat.length()){
                    if(pat[k] != txt[j])
                        break;
                    k++;
                    j++;
                }
                if(k == pat.length())
                    v.push_back(i + 1);
            }
            if(v.empty())   v.push_back(-1);
            return v;
        }   
};