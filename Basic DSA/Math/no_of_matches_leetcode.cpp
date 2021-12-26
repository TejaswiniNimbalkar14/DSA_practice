//No. of matches in tournament
//Leetcode: 1688

#include<iostream>
using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        //O(n)
        // int res = 0;
        // while(n > 1){
        //     if(n % 2 == 0){
        //         res += n / 2;
        //         n /= 2;
        //     } else {
        //         res += (n - 1) / 2;
        //         n = (n + 1) / 2;
        //     }
        // }
        // return res;
        
        //O(1)
        return n - 1;
    }
};