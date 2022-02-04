//Maximum of all subarrays of size k
//leetcode: 239
//GFG: https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1#

#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    
    //Bruteforce: TC: O(n ^ 2) AS: O(1)
    // vector <int> max_of_subarrays(int *arr, int n, int k)
    // {
    //     // your code here
    //     int max_n = INT_MIN;
    //     vector<int> res;
    //     for(int i = 0; i <= n - k; i++){
    //         max_n = INT_MIN;
    //         for(int j = i; j < i + k; j++){
    //             max_n = max(max_n, arr[j]);
    //         }
    //         res.push_back(max_n);
    //     }
        
    //     return res;
    // }
    
    
    //Sliding Window: TC: O(n ^ 2) AS: O(k)
    vector <int> max_of_subarrays(int *arr, int n, int k){
        int i = 0, j = 0;
        list<int> l;
        vector<int> res;
        while(j < n){
            //calculations
            while(!l.empty() && l.back() < arr[j])
                l.pop_back();
                
            l.push_back(arr[j]);
            
            if(j - i + 1 < k)   j++;
            else if(j - i + 1 == k){
                //answer from calculations
                res.push_back(l.front());
                
                //Slide the window
                if(l.front() == arr[i]) l.pop_front();
                i++;
                j++;
            }
        }
        return res;
    }
    
};
