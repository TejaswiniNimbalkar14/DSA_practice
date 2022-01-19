//Can place flowers
//leetcode: 605

#include<iostream>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        if(n == 0)  return true;
        for(int i = 0; i < v.size() ; i++){
            if(v[i] == 0  && (i == 0 || v[i - 1] == 0) 
              && (i == v.size() - 1 || v[i + 1] == 0)){
                n--;
                v[i] = 1;
            }
            if(n == 0)
                return true;
        }
    
        return false;
    }
};