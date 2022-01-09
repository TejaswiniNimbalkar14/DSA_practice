//Positive negative pairs
//GFG: https://practice.geeksforgeeks.org/problems/positive-negative-pair5209/1#


#include<iostream>
using namespace std;

class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        // code here
        vector<int> res;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int temp = abs(arr[i]);
            mp[temp]++;
            if(mp[temp] == 2){
                res.push_back(-temp);
                res.push_back(temp);
            }
        }
        return res;
    }
};