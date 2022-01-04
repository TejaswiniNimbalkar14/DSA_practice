//Complement of Base 10 Integer
//Leetcode: 1009

#include<iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0)  return 1;
        int i = 0;
        int res = 0;
        while(n != 0){
            int rem = n % 2;
            int flip = (rem == 0) ? 1 : 0;
            res += flip * pow(2, i);
            n /= 2;
            i++;
        }
        return res;
    }
};

//Study another approaches which use bit manipulation