//Car pooling (can a car pick up and drop all the passengers)
//Leetcode: 1094

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> v(1001, 0);
        int sum = 0;
        for(int i = 0; i < trips.size(); i++){
            v[trips[i][1]] += trips[i][0];
            v[trips[i][2]] -= trips[i][0];
        }
        for(int i = 0; i < 1001; i++){
            sum += v[i];
            if(sum > capacity)  return false;
        }
        return true;
    }
};