//Merge two binary max heaps
//GFG: https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1#

#include<iostream>
using namespace std;

class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        priority_queue<int> pq; //create a priority queue which implements max heap by default
        vector<int> mergedHeaps(n+m);   //to store merged binary max heaps
        
        for(int i=0; i<n; i++)
            pq.push(a[i]);  //store the first max heap in the priority queue
            
        for(int i=0; i<m; i++)
            pq.push(b[i]); //store the second max heap in the priority queue
            
        for(int i=0; i<n+m; i++)
        {
            mergedHeaps[i] = pq.top(); //store the merged binary max heap elements
            pq.pop();
        }
        
        return mergedHeaps; 
    }
};