//Gas Station
//leetcode: 134

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1, sum2;
        sum1 = sum2 = 0;
        for(int i : gas)
            sum1+= i;
        
        for(int i : cost)
            sum2 += i;
        
        if(sum1 < sum2) return -1;
        
        int cur_fuel = 0;
        int idx = 0;
        for(int i = 0; i < gas.size(); i++) {
            cur_fuel += gas[i] - cost[i];
            if(cur_fuel < 0){
                cur_fuel = 0;
                idx = i + 1;
            }
        }
        return idx;
    }
};