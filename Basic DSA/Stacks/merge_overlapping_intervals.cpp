//Merge overlapping intervals
//GFG Problem: https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1#
//Leetcode problem: 56

#include<iostream>
#include<vector>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         //Approach 1: Using extra space TC: O(nlogn)
        //  if(intervals.size() <= 1)
        //     return intervals;
        //  vector<vector<int>> ans;
        //  sort(intervals.begin(), intervals.end());
        //  ans.push_back(intervals[0]);
        //  for(int i = 0; i < intervals.size(); i++){
        //     if(ans.back()[1] >= intervals[i][0])
        //         ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        //     else
        //         ans.push_back(intervals[i]);
        //  }
        //  return ans;
        
        //Approach 2: without using extra space TC: O(nlogn)
        if(intervals.size() <= 1)
            return intervals;
        sort(intervals.begin(), intervals.end());    
        int id = 0;
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[id][1] >= intervals[i][0])
                intervals[id][1] = max(intervals[id][1], intervals[i][1]);
            else {
                id++;
                intervals[id] = intervals[i];
            }
        }
        for(int i = intervals.size() - 1; i > id; i--){
            intervals.pop_back();
        }
        return intervals;
    }
};

//Approach 3: we can use a stack also to store the merged intervals
//TC: O(nlogn) AS: O(n)

int main(){
    //handle input-output here
}