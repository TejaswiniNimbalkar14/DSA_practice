//Sort by set bit count
//GFG: https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1#

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Approach 1: Using C++ STL
    //TC: O(nlogn)
    static bool comp(int a, int b){
        return __builtin_popcount(a) > __builtin_popcount(b);
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr, arr + n, comp);
    }
};