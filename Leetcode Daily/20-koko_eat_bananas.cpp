//Koko Eating bananas
//leetcode: 875

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hours(vector<int> piles, int k) {
        int h = 0;
        for(int i : piles){
            int div = i / k;
            h += div;
            if(i % k != 0)  h++;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_d = INT_MIN;
        for(int i : piles){
            max_d = max(max_d, i);
        }
        int i = 1, j = max_d;
        while(i <= j){
            int k = i + (j - i) / 2;
            if(hours(piles, k) <= h)    j = k - 1;
            else    i = k + 1;
        }
        return i;
    }
};